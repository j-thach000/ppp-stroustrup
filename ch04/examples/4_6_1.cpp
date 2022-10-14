#include "std_lib_facilities.h"

// traversing a vector
int main()
{
    // print all the elements in an array
    vector<int> v = {5,7,9,4,6,8};
    for (int i = 0; i < v.size(); i++)
    {   // size() helps us avoid referring to an element that's outside of the vector's range
        std::cout << v[i] << '\n';
    }

    // getting the number of elements in a vector
    std::cout << "The number of elements in the vector: " << v.size();

    /*
    large emphasis on notation for the range of a vector
    [ 0 : v.size() ) inclusive index 0, non inclusive the result of v.size()
    this is a "half-open sequence" which is used throughout C++ and C++ STL 
    the first element of v was v[0]
    the last element of v was v[v.size() - 1]
    v.size() == 0 would indicate no elements in the array, AKA empty
    */ 

    vector<int> v = {1,2,3,4,5};
    for (int x : v) // "For all the integers that we'll refer to as x, in the sequence of elements called v"
        std::cout << x << '\n'; // print out x and go to a new line
}