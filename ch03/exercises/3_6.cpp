#include "std_lib_facilities.h"

// Write a program that prompts the user to enter three integer values, and
// then outputs the values in numerical sequence separated by commas. So,
// if the user enters the values 10 4 6, the output should be 4, 6, 10. If two
// values are the same, they should just be ordered together. So, the input
// 4 5 4 should give 4, 4, 5.

// 1, 2, 3
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1

// Brute forced solution? Doesn't scale at all for more integers
// Other solutions online create logic for finding the smallest, median, and largest integers then print

int main()
{
    std::cout << "Enter three integers: ";
    int int1, int2, int3;
    std::cin >> int1 >> int2 >> int3;
    if      (int1 <= int2 && int2 <= int3) std::cout << int1 << ", " << int2 << ", " << int3;
    else if (int1 <= int3 && int3 <= int2) std::cout << int1 << ", " << int3 << ", " << int2;
    else if (int2 <= int1 && int1 <= int3) std::cout << int2 << ", " << int1 << ", " << int3;
    else if (int2 <= int3 && int3 <= int1) std::cout << int2 << ", " << int3 << ", " << int1;
    else if (int3 <= int1 && int1 <= int2) std::cout << int3 << ", " << int1 << ", " << int2;
    else                                   std::cout << int3 << ", " << int2 << ", " << int1;


}