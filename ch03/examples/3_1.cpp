#include "std_lib_facilities.h" // don't ignore the QOL given by this header file
                                // automatically includes libraries and useful functions

// read and write a first name
int main()
{
    std::cout << "Please enter your first name (followed by 'enter'):\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Hello, " << first_name << "!\n";
    keep_window_open();
    return 0;
}