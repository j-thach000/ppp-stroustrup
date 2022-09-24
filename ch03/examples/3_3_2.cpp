#include "std_lib_facilities.h"

// read name and age (2nd revision)
// purpose is to standardize any input errors
int main()
{
    std::cout << "Please enter your first name and age\n";
    std::string first_name = "???";
    int age = 0;                     
    std::cin >> first_name >> age;              
    std::cout << "Hello, " << first_name << " (age " << age << ")\n";
    keep_window_open();
}