#include "std_lib_facilities.h"

/*
selection statements (instructions that determine which statements execute)
if-else
switch
*/
int main()
{
        // if acts as the simplest selection tool
    int a = 0;
    int b = 0;
    std::cin >> a >> b; // can enter both inputs on the same line

    if (a < b) 
        std::cout << "max(" << a << ", " << b << ") is " << b << '\n';
    else       
        std::cout << "max(" << a << ", " << b << ") is " << a << '\n';

    std::cout << '\n';

    // convert from inches to centimeters or centimeters to inches
    // a suffix "i" or "c" indicates the unit of the input

    std::cout << "[length converter v2]\n";

    constexpr double cm_per_inch = 2.54;
    
    double length = 1;
    char unit = 0;

    std::cout << "Enter a length and type of unit to be converted: ";
    std::cin >> length >> unit;

    // account for potential incorrect input from users
    if      (unit == 'i')
         std::cout << length << "in == " << length * cm_per_inch << "cm\n";
    else if (unit == 'c')
         std::cout << length << "cm == " << length / cm_per_inch << "in\n";
    else 
         std::cout << "Sorry," << unit << " is an invalid unit of measurement for this program.\n";

}