#include "std_lib_facilities.h"

// concrete example of getting an unknown amount of data into a computer
// read some temperatures into vector
int main()
{
    vector<double> temps; // temperatures
    for (double temp; cin >> temp; ) // read into temp
        temps.push_back(temp); // store temp in vector
    // reading via cin as a condition is considered true if a value was read correctly
    // for loop was used to limit the scope of temp
    std::cout << "\nEnd of input\n";

    std::cout << "\nNow printing temperatures: \n";

    for (auto x : temps) std::cout << x << '\n';

    std::cout << "\nNow printing mean temperature: \n";
    double sum = 0;
    for (auto x : temps) sum += x; // type inference via auto
    std::cout << "Average temperature: " << sum/temps.size() << '\n';

    std::cout << "\nNow printing median temperature: \n";
    sort(temps); // sort temperatures using algorithm
    for (auto x : temps) sum += x; // type inference via auto
    std::cout << "Median temperature: " << temps[temps.size()/2] << '\n';
    // temps.size() produces # of elements
    // vector begins the index of elements from 0
    // index printed: elements/2 and since it's integer division, round down
    // ex: 5/2 = 2.5 but it just becomes 2
    // a vector with 5 elements and their indexes 0 1 2 3 4
    // 2 is the median


}