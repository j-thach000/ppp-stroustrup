#include "std_lib_facilities.h"

int main()
{
    /*
    conversions - mixing different data types in one expression
    type{value}
    type()
    the above is syntax to convert a value to a type
    the difference is that {} prevents narrowing conversion 
    */

    double d = 2.5;
    int i = 2;

    double d2 = d/i;                // double divided by integer so floating-point division
    std::cout << d2 << '\n';        // prints 1.25
    int i2 = d/i;                   // integer division
    std::cout << i2 << '\n';        // prints 1
    // int i3 {d/i};                // narrowing conversion prevented by {} 
    // std::cout << i3 << '\n';     // compiler throws a warning
    int i3 (d/i);                   // convert the value of d/i which was a double to an integer
    std::cout << i3 << '\n';        // prints 1 like i2 which showed integer division

    /* 
    beware of integer division in an expression
    even though dc is a double and the variable df is a double, 9/5 will still perform integer division  
    */
    double dc;
    std::cin >> dc;                 
    double df = 9/5 * dc + 32;      // 9/5 evaluates to 1 instead of the needed 1.8
    double xdf = 9.0/5 * dc + 32;   // either 9 or 5 must be changed into a double to get 1.8
}