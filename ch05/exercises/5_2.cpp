/*
2. 
The following program takes in a temperature value in Celsius and converts it to Kelvin. 
This code has many errors in it. Find the errors, list them, and correct the code.
double ctok(double c) // converts Celsius to Kelvin
{
    int k = c + 273.15;
    return int
}
int main()
{
    double c = 0; // declare input variable
    cin >> d; // retrieve temperature to input variable
    double k = ctok("c"); // convert temperature
    Cout << k << '/n' ; // print out temperature
}
*/

#include "std_lib_facilities.h" // missing header file

double ctok(double c) // converts Celsius to Kelvin
{
    double k = c + 273.15; // needs to be type double to match argument 
    return k; // missing semicolon 
              // not returning the variable
}
int main()
{
    double c = 0; // declare input variable
    cin >> c; // retrieve temperature to input variable
              // we're not putting our keyboard input into the input variable
    double k = ctok(c); // convert temperature
                        // input for the argument is a string literal and not a double
    cout << k << '\n' ; // print out temperature
                        // Cout instead of cout
                        // forward slash instead of backslash for newline character
}