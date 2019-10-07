#include "stdafx.h"

Game::Game (void)
{
  m_N_Players = 0;
  m_Board  = NULL;
  m_Player = NULL;
  m_Stack  = NULL;
}

Game::~Game (void)
{
  assert(m_Board !=NULL);
  assert(m_Player!=NULL);
  assert(m_Stack !=NULL);
  delete [] m_Board;
  delete [] m_Player;
  delete [] m_Stack;
}

Game * Game::Make (void)
{
  DlgGameInit dlg;
  if (dlg.DoModal() == IDOK)
  {
    Game * g = new Game();
    g->m_N_Players = dlg.m_N_Players;
    g->m_Board  = Board ::Make(dlg.m_N_Cols,dlg.m_N_Rows);
    g->m_Player = Player::Make(dlg.m_N_Players);
    g->m_Stack  = Card  ::Make();
    Card::Shuffle(g->m_Stack);
    return g;
  }
  return NULL;
}
