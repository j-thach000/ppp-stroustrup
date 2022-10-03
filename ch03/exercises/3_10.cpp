#include "std_lib_facilities.h"

/*
Write a program that takes an operation followed by two operands and
outputs the result. For example:
    + 100 3.14
    * 4 5
Read the operation into a string called operation and use an
if-statement to figure out which operation the user wants, for example,
if (operation=="+"). Read the operands into variables of type double.
Implement this for operations called +, –, *, /, plus, minus, mul, and div
with their obvious meanings.
*/

int main()
{
    std::string confirm_loop = "yes";

    while (confirm_loop == "yes")
    {
    std::cout << "Please enter an operation followed by two valid operands: ";
    std::string operation = " ";
    double operand1 = 0;
    double operand2 = 0;
    std::cin >> operation >> operand1 >> operand2;

    double result = 0;
    if      (operation == "+" || operation == "plus")  result = operand1 + operand2;
    else if (operation == "-" || operation == "minus") result = operand1 - operand2;
    else if (operation == "*" || operation == "mul")   result = operand1 * operand2;
    else if (operation == "/" || operation == "div")   result = operand1 / operand2;

    std::cout << operand1 << " " << operation << " " << operand2 << " = " << result << '\n';
    
    std::cout << "Run program again? ";
    std::cin >> confirm_loop;
    }

    keep_window_open();
}