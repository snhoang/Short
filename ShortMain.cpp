#include <iostream>
#include "Short.h"

using namespace std;

int main()
{
    Short s(-128, DEC);
    Short one(1);
    for (int i=0; i <= 257; i++)
    {
        s.set_display_type(DEC);
        s.display();
        cout << " : ";
        s.set_display_type(HEX);
        s.display();
        cout << " : ";
        s.set_display_type(BIN);
        s.display();
        cout << endl;
        s.add(one);
    }
    return 0;
}
