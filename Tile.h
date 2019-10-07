#if !defined(_TILE_H_)
#define _TILE_H_

class Tile
{
  protected:
  public:
    typedef enum {
      Tile_A,
      Tile_B,
      // ...
      TileCount // must be last!
    } TileType;
  friend Card;
  public:
    Tile (void);
    Tile (TileType t);
    virtual ~Tile (void);

    Tile * Use (Card c) const;


  protected:
    Tile * MoveResult [Card::MoveCount];


  public:
    TileType m_TileType;

  protected:

};

#else
#error Tile.h included twice
#endif
