#include "std_lib_facilities.h"

/*
9. Keep track of the sum of values entered (as well as the smallest and the
largest) and the number of values entered. When the loop ends, print the
smallest, the largest, the number of values, and the sum of values. Note
that to keep the sum, you have to decide on a unit to use for that sum; use
meters.

I skipped ahead a bit and used the vector earlier than instructed.
The whole point of this drill seemed to emphasize the use case of vectors.
*/

int main()
{
    double current = 0;
    double sum = 0;
    std::string unit = "";
    vector<double> user_input_storage;

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
            {
            std::cout << "Your input contains an illegal or unrepresented unit.\n";
            break;
            }
        else 
            std::cout << "Your input was " << current << unit << ".\n";

        // convert the input to meters
        if (unit == "cm") current = current / cm_per_meter;
        else if (unit == "in") current = (current * cm_per_inch) / cm_per_meter; // in to cm, cm to m
        else if (unit == "ft") current = ((current * in_per_foot) * cm_per_inch) / cm_per_meter; // ft to in, in to cm, cm to m
        std::cout << "Your input converted to meters for storage is " << current << ".\n";

        // push user input into a vector
        user_input_storage.push_back(current);

        // print total elements in array
        std::cout << " Values stored: " << user_input_storage.size() << '\n';

        // sort the array to find the smallest and largest elements
        sort(user_input_storage);
        std::cout << "Smallest value: " << user_input_storage[0] << '\n'
                  << " Largest value: " << user_input_storage[user_input_storage.size() - 1] << '\n';

        // print total sum of values stored
        for (auto x : user_input_storage)  sum += x;
        std::cout << "Sum           : " << sum << '\n';

        std::cout << "--------------------------------------------" << '\n'
                  << "Enter '|' at any time to abort the program.\n"
                  << "--------------------------------------------" << '\n';
    }    
}