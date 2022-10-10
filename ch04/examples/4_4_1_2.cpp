#include "std_lib_facilities.h"

// switch statements are good for the comparison of a value against certain constants
// clearer to use than a bunch of nested if-else statements
int main()
{
    constexpr double cm_per_inch = 2.54;

    double length = 1;

    char unit = 'a';
    std::cout << "Please enter a length followed by a unit (c or i):\n";
    std::cin >> length >> unit;

    /*
    - the value that we switch on must be int, char, or enumeration type (ch09)
    - each case label is a constant
    - no same values for labels
    - end each case with a break statement unless you want fallthroughs 
    */
    switch (unit) // value
    {
        case 'i': // constants, each being a case label, "labelling each case"
            std::cout << length << "in == " << length * cm_per_inch << "cm\n";
            break;
        case 'c':
            std::cout << length << "cm == " << length / cm_per_inch << "in\n";
            break;
        default: // not necessary but recommended unless you just somehow know every possible scenario
            std::cout << "Sorry, " << unit << " is an invalid unit of measurement for this program.\n";
            break;
    }
}