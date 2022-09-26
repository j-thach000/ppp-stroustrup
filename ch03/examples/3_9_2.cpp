#include "std_lib_facilities.h"

// demonstrate unsafe type conversions
// a value can unintentionally get turned into another type but have its value changed
int main()
{
    int a = 20000;
    char c = a;     // squeezing a large int into a small char, resulting in 32
    int b = c;      // taking the result of squeezing an int to a char and putting it back to int
    if (a != b)
        std::cout << "oops!: " << a << "!=" << b << '\n';
    else 
        std::cout << "Wow! We have large characters.'\n";
}