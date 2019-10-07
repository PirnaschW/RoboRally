#if !defined(_OPTION_H_)
#define _OPTION_H_

class Option
{
  public:
  protected:
    typedef enum {
      Option_A,
      Option_B,
      // ...
      OptionCount // must be last!
    } OptionType;

  public:
    Option (OptionType o);
    virtual ~Option (void);


  protected:
    


  public:
};

#else
#error Option.h included twice
#endif
