#include "stdafx.h"

const int Card::MoveCounts [MoveCount] = { 20, 20, 15, 15, 30, 30, 20 };
const int Card::N_CARDS = 150;

Card::Card (void)
{
}

Card::~Card (void)
{
}

Card * Card::Make (void)
{
  Card * c = new Card [N_CARDS];
  for (int i=0, j=0, k=0; i<N_CARDS; i++, j++)
  {
    if (j >= MoveCounts[k]) { k++; j=0; }
    c[i].m_Move = (Move) k;
  }
  return c;
}

void Card::Shuffle (Card * c)
{
  Card C;
  for (int i=0; i<N_CARDS*8; i++)
  {
    int N1 = Rnd::Int(N_CARDS) - 1;
    int N2 = Rnd::Int(N_CARDS) - 1;
    // swap them:
    C    .m_Move = c[N1].m_Move;
    c[N1].m_Move = c[N2].m_Move;
    c[N2].m_Move = C.    m_Move;
  }
}
