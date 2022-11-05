/*
5. Write a program that performs as a very simple calculator. Your calculator
should be able to handle the four basic math operations — add, subtract,
multiply, and divide — on two input values. Your program should prompt
the user to enter three arguments: two double values and a character to
represent an operation. If the entry arguments are 35.6, 24.1, and '+', the
program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6
we look at a much more sophisticated simple calculator.
*/

#include <iostream>

int main()
{
    double a = 0;
    std::cout << "Please input a value    : ";
    std::cin >> a;
    double b = 0;
    std::cout << "Please input a value    : ";
    std::cin >> b;
    char operation;
    std::cout << "Please input a character: ";
    std::cin >> operation;
    
    double result = 0;

    switch (operation)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break; 
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;      
        default:
            std::cout << "Unknown operation. Please enter an arithmetic operation: + - * /";
            break; 
    }

    std::cout << "Result                  : " << result << '\n';
}