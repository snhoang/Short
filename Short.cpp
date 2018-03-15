/***************************************

Steve Hoang
CISP 400 MW 3:00 pm
Project 2
2/21/18

***************************************/


#include "Short.h"


Short::Short()
{
    _n = 0;
    _dt = DEC;
}

Short::Short(signed char s, display_type dt)
{
    _n = s;
    _dt= dt;
}
void Short::add(const Short& s)
{
    _n += s._n;
}
void Short::sub(const Short& s)
{
    _n -= s._n;
}
void Short::mult(const Short& s)
{
    _n *= s._n;
}
void Short::div(const Short& s)
{
    if( s._n == 0)
    {
        return;
    }
     else
     {
     _n /= s._n;
     }
}
void Short::display() const
{
    switch(_dt)
    {
        case(DEC): cout << int(_n);
        break;
        case(HEX): _display_HEX();
        break;
        case(BIN): _display_BIN();
        break;
        default: cout << "Display Error\n";
    };
}

void Short::_display_BIN() const
{
    unsigned char n = _n;
    unsigned char div = 128;
    unsigned char shift = 7;
    for(unsigned i = 0; i < 8; ++i)
    {
        cout << (((n&div) >> shift == 0)? 0:1) << ((i==3)? " " : "" );
        n <<= 1;
        shift >>= 1;
    }
    cout << "b";
}
void Short::_display_HEX() const
{
    string h= "0123456789ABCDEF";

    unsigned char n = _n;
    n >>= 4;
    cout << h[n];
    n = _n&15;
    cout << h[n] << "h";
}


void Short :: set_display_type(display_type s)
{
    if (s == DEC || s == HEX || s == BIN)
    {
        _dt = s;
    }
    else
    {
    cout << "Sorry that does not equal Binary,Hexidecimal or Decimal" <<endl;
    }
}
