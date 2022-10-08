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

    constexpr double cm_per_inch = 2.54;

    double length = 1; // length to be converted
    char unit = 0;     // unit to be converted, i or c

    std::cout << "Please enter a length followed by a unit (c or i):\n";
    std::cin >> length >> unit;

    // we never test for the case of centimeters specifically
    // it should do exactly what we intended and spit out and error otherwise
    if (unit == 'i') std::cout << length << "in == " << length * cm_per_inch << "cm\n";
    else             std::cout << length << "cm == " << length / cm_per_inch << "in\n";

    /*
    the program works but not exactly with the same input as macos
    something about the clang compiler thinking any xi input being an imaginary number (x being an integer)
    */
}