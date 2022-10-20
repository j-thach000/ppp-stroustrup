#include <iostream>

/*
8. Reject values without units or with “illegal” representations of units, such
as y, yard, meter, km, and gallons.
*/

int main()
{
    double current = 0;
    double smallest = 0;
    double largest = 0;

    std::string unit = "";

    // conversion factors (cm, m, in, ft)
    constexpr double cm_per_meter = 100;
    constexpr double cm_per_inch  = 2.54;
    constexpr double in_per_foot  = 12;

    std::cout << "--------------------------------------------" << '\n'; 

    // reads two integers and determines which is smaller, larger, or if they're equal   
    std::cout << "Input: ";
    while (std::cin >> current >> unit)
    {
        std::cout << "--------------------------------------------" << '\n';
                  
        // exclude input without units or "illegal" representation
        if (unit != "cm" || unit != "m" || unit != "in" || unit != "ft")
            std::cout << "Your input contains an illegal or unrepresented unit.\n";
        else 
            std::cout << "Your input was " << current << unit << ".\n";

        // using selection statements for the logic of smallest and largest value seen so far
        if (smallest == 0 && largest == 0)
        {
            smallest = current;
            largest = current;
            std::cout << "This is the largest value so far.\n";
        }
        if (current > largest) 
        {
            largest = current;
            std::cout << "This is the largest value so far.\n";
        }
        if (current < smallest) 
        {
            smallest = current;
            std::cout << "This is the smallest value so far.\n";
        }
        
        std::cout << "--------------------------------------------" << '\n'
                  << "Enter '|' at any time to abort the program.\n"
                  << "--------------------------------------------" << '\n';
    }    
}