#include "std_lib_facilities.h"

// Write a program to test an integer value to determine if it is odd or
// even. As always, make sure your output is clear and complete. In other
// words, don’t just output yes or no. Your output should stand alone,
// like The value 4 is an even number. Hint: See the remainder (modulo)
// operator in §3.4.

// definition of even: if an integer is divided by 2 and it results in another integer
// definition of odd:  if any integer is divided by 2 and leaves a remainder or results in a fraction

// solution proposes just having a default value for output and then only changing it if necessary
// line 17 uses 0 and 1 produced from the modulo as truth values

int main()
{
    std::cout << "Please enter an integer to test if it's even or odd: ";
    int input = 0;
    std::cin >> input;
    std::string result = "even";
    if (input % 2) result = "odd"; // any non-zero result from the expression results in true 

    std::cout << "The integer " << input << " is " << result << '\n';  

    keep_window_open();
}