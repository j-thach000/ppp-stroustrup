#include <iostream>
#include <algorithm>
#include <vector>

/*
11. Before writing out the values from the vector, sort them (that’ll make
them come out in increasing order).

Already done in 4_10
Took three days on and off to finish this....
Realistically should have taken maybe 3-4 hours on one day
*/

int main()
{
    double current = 0;
    std::string unit = "";
    std::vector<double> user_input_storage;

    // conversion factors (cm, m, in, ft)
    constexpr double cm_per_meter = 100;
    constexpr double cm_per_inch  = 2.54;
    constexpr double in_per_foot  = 12;

    std::cout << "--------------------------------------------" << '\n';    
    // a loop that reads in certain units and converts them while tracking the smallest and largest value seen
    while (std::cin >> current >> unit)
    {
        std::cout << "--------------------------------------------" << '\n';

        // exclude input without units or "illegal" representation
        if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
        {
            std::cout << "Your input was " << current << unit << ".\n";
        }
        else 
        {
            std::cout << "Your input was invalid. Unsupported unit or lack of unit provided.\n"
                      << "--------------------------------------------" << '\n';
            break;
        }

        // convert the input to meters
        if      (unit == "cm") current = current / cm_per_meter;
        else if (unit == "in") current = (current * cm_per_inch) / cm_per_meter; // in to cm, cm to m
        else if (unit == "ft") current = ((current * in_per_foot) * cm_per_inch) / cm_per_meter; // ft to in, in to cm, cm to m
        
        std::cout << "Your input converted to meters for storage is " << current << ".\n";

        // push user input into a vector
        user_input_storage.push_back(current);

        // print total elements in array
        std::cout << " Values stored: " << user_input_storage.size() << "m\n";

        // sort the array to find the smallest and largest elements
        std::sort(user_input_storage.begin(), user_input_storage.end());
        std::cout << "Smallest value: " << user_input_storage[0] << "m\n"
                  << " Largest value: " << user_input_storage[user_input_storage.size() - 1] << "m\n";

        // print total sum of values stored
        double sum = 0;
        for (auto x : user_input_storage)  sum += x;
        std::cout << "           Sum: " << sum << "m\n";

        // print out all values stored in vector
        std::cout << "--------------------------------------------" << '\n'
                  << "Values stored:" << '\n';
                  for (auto x : user_input_storage)
                  {
                    std::cout << x << '\n';
                  }
                  
        // terminating input reminder
        std::cout << "--------------------------------------------" << '\n'
                  << "Enter '|' at any time to abort the program.\n"
                  << "--------------------------------------------" << '\n';
    }    
}