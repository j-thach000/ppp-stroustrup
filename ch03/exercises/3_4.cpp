#include "std_lib_facilities.h"

// Write a program that prompts the user to enter two integer values. Store
// these values in int variables named val1 and val2. Write your program to
// determine the smaller, larger, sum, difference, product, and ratio of these
// values and report them to the user

int main()
{
    std::cout << "Enter two integer values\n";
    int val1, val2;
    std::cin >> val1 >> val2;
    
    // smaller of the values
    if      (val1 < val2)  std::cout << "The smaller input: " << val1 << '\n';
    else if (val2 < val1)  std::cout << "The smaller input: " << val2 << '\n';
    else                   std::cout << "The inputs are equal" << '\n';

    // larger of the values
    if      (val1 > val2)  std::cout << "The larger input: " << val1 << '\n';
    else if (val2 > val1)  std::cout << "The larger input: " << val2 << '\n';
    else                   std::cout << "The inputs are equal" << '\n';

    // sum of the values
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';

    // difference of the values
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';

    // product of the values
    std::cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';

    // ratio of the values 
    std::cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';

    keep_window_open();
}