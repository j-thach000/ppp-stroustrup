#include "std_lib_facilities.h"


int main()
{
    /* 
    expressions are the most basic building block of programs
    their purpose is to compute (certain output from certain input) a value from a literal or operands
    */ 
    // compute area;
    int length = 20; // a literal integer getting assigned to the object length
    int width = 40;
    int area = length * width; // operation performed on two operands
    int perimeter = 2 * (length + width); // parentheses emphasize what to evaluate first

    /*
    constant expressions allow named objects to have values that can't be changed after initialization
    has to be given a value by compile time
    literals are constant expressions
    avoid using literals and opt for constants (avoid magic numbers)
    */
    constexpr double pi = 3.14159; 
    int buh = 0;
    const int c2 = buh + 2; // doesn't need to have a value by compile time


}