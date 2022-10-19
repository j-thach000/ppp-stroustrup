#include <iostream>

/*
5. Change the program so that it writes out the numbers are almost equal
after writing out which is the larger and the smaller if the two numbers
differ by less than 1.0/100.
*/

int main()
{
    double a = 0;
    double b = 0;
    
    std::cout << "--------------------------------------------" << '\n'; 

    // reads two integers and determines which is smaller, larger, or if they're equal   
    std::cout << "Input: ";
    while (std::cin >> a >> b)
    {
        std::cout << "--------------------------------------------" << '\n'
                  << "Your input was " << a << " and " << b << ".\n";

        // using selection statements for the logic of smaller vs larger values
        double smaller = 0;
        double larger = 0;
        if (a < b)
        {
            smaller = a;
            larger = b;
        } 
        else 
        {
            smaller = b;
            larger = a;
        }
        
        // print statements comparing the values of in
        if (a != b)
        {
        std::cout << "The smaller value is: " << smaller << '\n'
                  << " The larger value is: " << larger << '\n';
        }
        else std::cout << "The numbers are equal.\n";
        if (std::abs(a - b) < 0.01) std::cout << "The numbers are almost equal.\n";

        std::cout << "--------------------------------------------" << '\n'
                  << "Enter '|' at any time to abort the program.\n"
                  << "--------------------------------------------" << '\n';
    }    
}