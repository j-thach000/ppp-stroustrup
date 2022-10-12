#include "std_lib_facilities.h"

// squares an integer input
int square(int x) // function called square that takes an integer called x (argument)
                  // returns an integer as it has the type int before its name
{
    return x * x;
}

// void function that has no return value
void write_sorry()
{
    std::cout << "sorry\n";
}

int main()
{
    std::cout << square(5) << '\n'; // if the function above is placed after main,
                            // compiler error: square wasn't defined in scope 
                            // how can the program call a function that hasn't been defined yet?
    /*
    square(2); // unused return value (4)
    int v1 = square(); // missing argument
    int v2 = square;   // missing parentheses that would hold arguments
    int v3 = square(1, 2); // too many arguments
    int v4 = square("two"); // invalid argument
    */

    write_sorry();
}