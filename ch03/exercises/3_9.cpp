#include "std_lib_facilities.h"

/*
Write a program that converts spelled-out numbers such as “zero” and
“two” into digits, such as 0 and 2. When the user inputs a number, the
program should print out the corresponding digit. Do it for the values 0,
1, 2, 3, and 4 and write out not a number I know if the user enters something
that doesn’t correspond, such as stupid computer!.
*/

int main()
{
    std::cout << "Please enter a spelled-out number, ex: zero\n";
    std::string input;
    std::cin >> input;
    int result;
    if      (input == "zero")   std::cout << input << " has the value 0" << '\n'; 
    else if (input == "one")    std::cout << input << " has the value 1" << '\n'; 
    else if (input == "two")    std::cout << input << " has the value 2" << '\n'; 
    else if (input == "three")  std::cout << input << " has the value 3" << '\n'; 
    else if (input == "four")   std::cout << input << " has the value 4" << '\n'; 
    else                        std::cout << "That's not a number I know\n";

    keep_window_open();
}