#include <iostream>

/*
7. Add a unit to each double entered; that is, enter values such as 10cm,
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft. Assume conversion
factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit
indicator into a string. You may consider 12 m (with a space between the
number and the unit) equivalent to 12m (without a space).
*/

int main()
{
    double current = 0;
    double smallest = 0;
    double largest = 0;

    std::string unit = "";

    // conversion factors    
    constexpr double cm_per_meter = 100;
    constexpr double cm_per_inch  = 2.54;
    constexpr double in_per_foot  = 12;

    std::cout << "--------------------------------------------" << '\n'; 

    // reads two integers and determines which is smaller, larger, or if they're equal   
    std::cout << "Input: ";
    while (std::cin >> current >> unit)
    {
        std::cout << "--------------------------------------------" << '\n'
                  << "Your input was " << current << unit << ".\n";

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