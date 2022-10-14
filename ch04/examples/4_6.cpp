#include "std_lib_facilities.h"

int main()
{
    // initializing a vector with predefined elements
    vector<int> v = {1, 2 ,3};
    vector<string> philosopher = {"Kant", "Plato", "Hume", "Kierkegaard"};

    philosopher[2] = 99; // works for some reason when the book says there's an error
    v[2] = "Hume"; // error: don't mix and match types in a vector

    // defining a vector of a certain size
    vector<int> vi(6); // (n) n being how many elements in the vector
                       // 6 ints initialized to 0
    vector<string> vs(4); // 4 strings of "" AKA 4 empty strings

    // can't refer to an element that doesn't exist
    vi[20000] = 44; // our vector vi only had 6 elements, not 20,000
                    // error: run-time range error
}