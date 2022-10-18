#include <iostream>

/*
4. Change the program so that it uses doubles instead of ints.
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
        std::cout << "--------------------------------------------" << '\n'; 
        std::cout << "Your input was " << a << " and " << b << ".\n";

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
        
        // print the smaller and larger value
        if (a != b)
        {
        std::cout << "The smaller value is: " << smaller << '\n'
                  << " The larger value is: " << larger << '\n';
        }
        else std::cout << "The values are equal.\n";

        std::cout << "--------------------------------------------" << '\n';
        std::cout << "Enter '|' at any time to abort the program.\n";
        std::cout << "--------------------------------------------" << '\n';
    }    
}