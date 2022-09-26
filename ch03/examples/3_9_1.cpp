#include "std_lib_facilities.h"

// demonstrate safe type conversions
// their whole point is to help simplify writing code
int main()
{
    // char to int
    char c = 'x';   // integer value 120 in ASCII
    int a = c;      // set a to have c's value
    std::cout << a; // int a prints out 120

    // double to int
    double d1 = 2.3;                             // double
    double d2 = d1 + 2;                          // double and int used in same expression
    if (d1 < 0) std::cout << "d1 is negative\n"; // double and int compared
}