#if !defined(_CARD_H_)
#define _CARD_H_

class Card
{
  friend Tile;

  public:
  protected:
    typedef enum {
      Forward1,
      Forward2,
      Forward3,
      Backward1,
      TurnRight,
      TurnLeft,
      UTurn,
      MoveCount // must be last!
    } Move;
    static const int MoveCounts [MoveCount];
    static const int N_CARDS;

  public:
    Card (void);
    virtual ~Card (void);

    static Card * Make (void);
    static void Shuffle (Card * c);

  protected:
    Tile * MoveResult [MoveCount];
    


  public:
    Move m_Move;

  protected:
};

#else
#error Card.h included twice
#endif
