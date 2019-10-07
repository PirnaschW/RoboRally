#include "stdafx.h"

Board::Board (void)
{
  m_Tile = NULL;
}

Board::~Board (void)
{
  assert(m_Tile!=NULL);
  delete [] m_Tile;
}

Board * Board::Make (int SizeX, int SizeY)
{
  Board * b = new Board();
  b->m_SizeX = SizeX;
  b->m_SizeY = SizeY;
  b->m_Tile  = new Tile [SizeX*SizeY];
  for (int i=0; i<SizeX*SizeY; i++)
  {
    b->m_Tile[i].m_TileType = Tile::Tile_A;
  }
  return b;
}
