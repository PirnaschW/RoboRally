#include "stdafx.h"

Player::Player (void)
{
  m_Name = NULL;
}

Player::~Player (void)
{
  assert(m_Name!=NULL);
  delete m_Name;
}

Player * Player::Make (int N_Player)
{
  Player * p = new (Player [N_Player]);
  for (int i=0; i<N_Player; i++)
  {
    DlgPlayerInit dlg;
    dlg.m_Number = i;
    dlg.DoModal();
    p[i].m_Computer = dlg.m_Computer != FALSE;
    assert(p[i].m_Name==NULL);
    if (dlg.m_Computer)
    {
      static const char ComputerName [] = "Computer %d";
      p[i].m_Name = new char [strlen(ComputerName)];
      sprintf(p[i].m_Name,ComputerName,i);
    }
    else
    {
      p[i].m_Name = new char [strlen(dlg.m_Player_Name)+1];
      strcpy(p[i].m_Name,dlg.m_Player_Name);
    }
    assert(p[i].m_Name!=NULL);
  }
  return p;
}
