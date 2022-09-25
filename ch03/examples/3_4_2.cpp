#include "std_lib_facilities.h"

// read first and second name
// demonstrate + operator to concatenate strings
int main()
{
    std::cout << "Please enter your first and second names\n";
    std::string first;
    std::string second;
    std::cin >> first >> second;                // read two strings
    std::string name = first + " " + second;    // concatenate strings
    std::cout << "Hello, " << name << '\n';
    keep_window_open();
}