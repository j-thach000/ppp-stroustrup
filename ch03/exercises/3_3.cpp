#include "std_lib_facilities.h"

// Write a program that doesn’t do anything, but declares a number of variables with 
// legal and illegal names (such as int double = 0;), so that you can see how the compiler reacts.

int main()
{
    // names start with a letter and only include letters, numbers, or underscores
    
    // legal names
    int a;
    int number_of_elements;
    int Fourier_transform;
    int z2;
    double Polygon;

    // illegal names
    int 2x; // must start with a letter
    double time$to$ticket;
    std::string Start menu;
}