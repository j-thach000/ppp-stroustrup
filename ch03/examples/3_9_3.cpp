#include "std_lib_facilities.h"

// another demonstration of unsafe int to char conversion (narrowing conversion)
int main()
{
    double d = 0;
    while (cin >> d)
    {
        int i = d;
        char c = i;
        int i2 = c;     // holds the value of the input after it goes through narrowing conversion
        cout << "d == " << d << '\n'
             << "i == " << i << '\n'
             << "i2 == " << i2 << '\n'
             << "char(" << c << ")\n";
    }
}