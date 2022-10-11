#include "std_lib_facilities.h"

int main()
{
    // calculate and print a table of squares from 0-99
    int i = 0; // initialize control variable
    while (i < 100) //  end condition
    { // body is called a block AKA compound statement
        std::cout << i << '\t' << i*i << '\n'; 
        i++; // increment/decrement 
    }

    std::cout << '\n';

    // rewrite with a for loop
    for (int i = 0; i < 100; i++) // initialize control variable, end condition, increment/decrement
    { // block
        std::cout << i << '\t' << i*i << '\n'; 
    }
    

}