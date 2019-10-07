#if !defined(_BOARD_H_)
#define _BOARD_H_

#define  BoardSize  12

class Board
{
  protected:
    Board (void);

  public:
    virtual ~Board (void);

    static Board * Make (int SizeX, int SizeY);

  protected:
    


  public:
    


  protected:
    int m_SizeX;
    int m_SizeY;
    Tile * m_Tile;
};

#else
#error Board.h included twice
#endif
