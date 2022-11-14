#include <iostream>
#include <vector>
#include <algorithm>

/*
3. Read a sequence of double values into a vector. Think of each value as
the distance between two cities along a given route. Compute and print
the total distance (the sum of all distances). Find and print the smallest
and greatest distance between two neighboring cities. Find and print the
mean distance between two neighboring cities.
*/

/* 
1. reinterpret the problem, clear up ambiguities
input - double values (represent the distance between two cities)
output - sum of all distances, smallest and greatest distance, mean distance

i want to be able to enter values and then stop
afterwards, spit out:
sum of all values
smallest value
biggest value
mean of all values

2. previous problems
need a container to hold all the values
a way to repeatedly enter the values
computations for:
-summing all values
-finding smallest distance
-finding greatest distance
-mean of distances

4.
*/

int main()
{
    // input and store all distances
    std::vector<double> distancesOfCities;
    for (double input_distance; std::cin >> input_distance;)
    {
        distancesOfCities.push_back(input_distance);
    }

    // sum all values
    double sumOfDistances = 0.0;
    for (auto x : distancesOfCities) sumOfDistances += x;
    std::cout << "Sum of all distances  : " << sumOfDistances << '\n';

    // sort all values
    std::sort(distancesOfCities.begin(), distancesOfCities.end());

    // smallest distance
    std::cout << "Smallest distance     : " << distancesOfCities[0] << '\n';

    // biggest distance
    std::cout << "Biggest distance      : " << distancesOfCities[distancesOfCities.size() - 1] << '\n';

    // mean distance
    std::cout << "Mean distance         : " << sumOfDistances / distancesOfCities.size() << '\n';
}