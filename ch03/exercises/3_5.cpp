#include "std_lib_facilities.h"

// Modify the program above to ask the user to enter floating-point values
// and store them in double variables. Compare the outputs of the two programs
// for some inputs of your choice. Are the results the same? Should
// they be? What’s the difference?

// There should be a difference
// The ratio output is essentially division which was different for the floating-point values 
// The double data type allowed for more precision in the calculation and output

int main()
{
    std::cout << "Enter two floating-point values\n";
    double val1, val2;
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