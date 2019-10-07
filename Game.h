#if !defined(_GAME_H_)
#define _GAME_H_

#define  GameSizeX   2
#define  GameSizeY   2
#define  StackSize  60

class Game
{
  protected:
    Game (void);
  public:
    virtual ~Game (void);

    static Game * Make (void);

  protected:
    


  public:
    


  protected:

  public:
    int m_N_Players;
    Board  * m_Board;
    Card   * m_Stack;
    Player * m_Player;
};

#else
#error Game.h included twice
#endif
