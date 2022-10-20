#include <iostream>
#include <vector>
#include <algorithm>

/*
9. Keep track of the sum of values entered (as well as the smallest and the
largest) and the number of values entered. When the loop ends, print the
smallest, the largest, the number of values, and the sum of values. Note
that to keep the sum, you have to decide on a unit to use for that sum; use
meters.
*/

int main()
{
    double current = 0;
    double smallest = 0;
    double largest = 0;

    std::string unit = "";

    std::vector<double> user_input_storage;

    // conversion factors (cm, m, in, ft)
    constexpr double cm_per_meter = 100;
    constexpr double cm_per_inch  = 2.54;
    constexpr double in_per_foot  = 12;

    std::cout << "--------------------------------------------" << '\n';    
    std::cout << "Input: ";
    // a loop that reads in certain units and converts them while tracking the smallest and largest value seen
    while (std::cin >> current >> unit)
    {
        std::cout << "--------------------------------------------" << '\n';

        // exclude input without units or "illegal" representation
        if (unit != "cm" || unit != "m" || unit != "in" || unit != "ft")
            std::cout << "Your input contains an illegal or unrepresented unit.\n";
        else 
            std::cout << "Your input was " << current << unit << ".\n";

        // convert the input to meters
        if (unit == "cm") 

        // push user input into a vector
        user_input_storage.push_back(current);

        // sort the array
        std::sort(user_input_storage);

        std::cout << "--------------------------------------------" << '\n'
                  << "Enter '|' at any time to abort the program.\n"
                  << "--------------------------------------------" << '\n';
    }    
}