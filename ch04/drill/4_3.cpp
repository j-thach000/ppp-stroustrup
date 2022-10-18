#include <iostream>

/*
3. Augment the program so that it writes the line the numbers are equal
(only) if they are equal.
*/

int main()
{
    int a = 0;
    int b = 0;
    
    std::cout << "--------------------------------------------" << '\n';

    // reads two integers and determines which is smaller, larger, or if they're equal   
    std::cout << "Input: ";
    while (std::cin >> a >> b)
    {
        std::cout << "--------------------------------------------" << '\n';
        std::cout << "Your input was " << a << " and " << b << ".\n";

        // using selection statements for the logic of smaller vs larger values
        int smaller = 0;
        int larger = 0;
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
    }    
}