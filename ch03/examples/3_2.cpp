#include "std_lib_facilities.h"

// read name and age
int main()
{
    std::cout << "Please enter your first name and age\n";
    std::string first_name; // string variable
    std::cin >> first_name; // place what is read from the keyboard into first_name 
    int age;                // integer variable
    std::cin >> age;        // place what is read from the keyboard into age
    std::cout << "Hello, " << first_name << " (age " << age << ")\n";
    keep_window_open();
}