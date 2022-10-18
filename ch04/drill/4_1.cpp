#include <iostream>

/*
1. Write a program that consists of a while-loop that (each time around the
loop) reads in two ints and then prints them. Exit the program when a
terminating '|' is entered.
*/

int main()
{
    int a = 0;
    int b = 0;

    while (std::cin >> a >> b)
    {
        std::cout << "Your input was " << a << " and " << b << ".\n";
        
        std::cout << "Enter '|' at any time to abort the program.\n";
    }    
}