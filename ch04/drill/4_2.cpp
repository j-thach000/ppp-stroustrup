#include <iostream>

/*
2. Change the program to write out the smaller value is: followed by the
smaller of the numbers and the larger value is: followed by the larger
value.
*/

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "--------------------------------------------" << '\n';
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

        // print
        std::cout << "The smaller value is: " << smaller << '\n'
                  << " The larger value is: " << larger << '\n'
                  << "--------------------------------------------" << '\n';

        std::cout << "Enter '|' at any time to abort the program.\n";
    }    
}