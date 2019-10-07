#ifndef RND_H
#define RND_H

class Rnd
{
  public:
    static int    Rnd::Select (const int n, const bool * flags, const int * chance);
    static int    Rnd::Int    (const int x);
    static double Rnd::Double (void);
    static int    Rnd::Throw  (const char * dice);
};

#endif
