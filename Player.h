#if !defined(_PLAYER_H_)
#define _PLAYER_H_

class Player
{
  protected:
    Player (void);

  public:
    virtual ~Player (void);

    static Player * Make (int N_Players);

  protected:
    


  public:
    


  protected:
    bool m_Computer;
    char * m_Name;
};

#else
#error Player.h included twice
#endif
