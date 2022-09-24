#include "std_lib_facilities.h"

// string read is terminated by white space
// ex std::cin >> first would only read "James" from the input of "James Thach"
// we can assign more than one string at a time using >> followed by another variable
int main()
{
    std::cout << "Please enter your first and second names\n";
    std::string first;
    std::string second;
    std::cin >> first >> second;
    std::cout << "Hello, " << first << " " << second << '\n';
}