#include "std_lib_facilities.h"

// Write a program in C++ that converts from miles to kilometers. Your
// program should have a reasonable prompt for the user to enter a number
// of miles. Hint: There are 1.609 kilometers to the mile.

int main()
{
    std::cout << "Enter the number of miles you wish to convert to kilometers: ";
    double miles;
    std::cin >> miles;
    double kilometers = 1.609 * miles;
    std::cout << miles << " miles to kilometers is " << kilometers << " kilometers.\n";
}