#include "std_lib_facilities.h"

int main()
{
    vector<string> fast_food_chains = {"Taco Bell", "Popeyes", "Wendy's"};

    for (string x : fast_food_chains)
        std::cout << x << '\n';

    // push_back() inserts a new element at the end of a sequence of elements
    vector<double> v; // empty, v has no elements
    v.push_back(2.7);  // push_back() inserts an element into a sequence at the end
    for (auto x : v) // x gets its type from the type of v
        std::cout << x << '\n';
    
    std::cout << "[add 5.6]" << '\n';    
    v.push_back(5.6);  
    for (auto x : v) 
        std::cout << x << '\n';
    
    std::cout << "[add 7.9]" << '\n';
    v.push_back(7.9);  
    for (auto x : v) 
        std::cout << x << '\n';    

    
}