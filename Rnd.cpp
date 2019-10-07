#include "stdafx.h"

int Rnd::Select (const int n, const bool * flags, const int * chance)
{
  int sum = 0, i, a;
  for (i=0; i<n; i++) if (flags[i]) sum += chance[i];
  if (sum < 1) return 0;
  for (a=Int(sum),i=0; i<n; i++)
    if (flags[i])
      if ((a -= chance[i]) < 1) return i;
  return 0;
}

int Rnd::Int (const int x)
{
  return ((int) (Double() * (double) x) + 1);
}


double Rnd::Double (void)
/* Linearer Kongruenzgenerator nach Afflerbach
   x[i+1] = x[i] * 27132 + 1   (mod 62748517), z[i] = x[i] / 62748517
   Periodenlaenge 62748517, Beyer-Quotienten 0.969, 0.922, 0.819
   Bestmoegliche Verteilung fuer Modul m < 1E9 */
{
  static unsigned long xi = 0;
  int i;
  unsigned long z = 0;

  if (xi == 0) xi = (unsigned long) time(NULL);

  for (i=30; i>0; i--) {
    z <<= 1;
    if (xi & (1L << (i-1))) z += 27132L;
    while (z > 62748516L) z -= 62748517L;
  }
  xi = z + 1L;
  return ((double) xi / 62748517.0);
}

/*--------------------------------------------------------------------------
| Zur Berechung einer komplizierter definierten Zufallszahl                |
| Parameter :                                                              |
|   char * prompt    Beschreibung des Bereichs. Folgende Syntax ist zu-    |
|                    laessig :                                             |
|                      n      Der Text wird als Konstante betrachtet und   |
|                             addiert                                      |
|                      ndm    der Buchstabe d kennzeichnet, dass die vor-  |
|                             herstehende Zahl als Wiederholung und die    |
|                             folgende Zahl als Bereich einer gleichver-   |
|                             teilten Zufallszahl auszuwerten ist, d. h.,  |
|                             wie mehrere Wuerfel dieses Typs  : z.B.      |
|                             liefert 3d6 drei Zahlen von 1 - 6 addiert,   |
|                             also 3 - 18.                                 |
|                      +      Die Bereiche vor und hinter dem Plus werden  |
|                             addiert.                                     |
|                      -      Die Bereiche vor und hinter dem Plus werden  |
|                             subtrahiert.                                 |
|                                                                          |
| Returnwert :                                                             |
|   int                     Ergebnis (Zufallszahl)                         |
|                                                                          |
| Beispiel :                                                               |
|  3d4+1  Das Ergebnis entspricht dem Wurf von 3 vierseitigen Wuerfeln + 1 |
--------------------------------------------------------------------------*/
int Rnd::Throw (const char * dice)
{
  int sum = 0, n = 1, i = 0, d = 0, z = 0, s = 0;
  char mess [80];
  bool add_old = true, add = true;

  do {
    switch (dice[z]) {
    case '0' :  case '1' :  case '2' :  case '3' :  case '4' :
    case '5' :  case '6' :  case '7' :  case '8' :  case '9' :
      sscanf(dice+z,"%d",&n);
      while (dice[z+1] >= '0' && dice[z+1] <= '9') z++;
      break;
    case 'd' :
      d = n;
      n = 1;
      break;
    case '-' :
      add = false;
    case '+' :
    case '\0' :
      s = 0;
      if (d > 0) for (i=0; i<d; i++) s += Int(n);
      else s = n;
      d = 0;
      n = 1;
      if (add_old == false) s = -s;
      sum += s;
      add_old = add;
      add = true;
      if (dice[z] == '\0') return (sum);
      break;
    default  :
      sprintf(mess,"syntax error in throw: char \"%c\" unknown",dice[z]);
      AfxMessageBox(mess);
      return(0);
    }
  } while (++z);
  return(-1);
}
