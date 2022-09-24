#include "std_lib_facilities.h"

// try this
int main()
{
    std::cout << "Please enter your first name and age\n";
    std::string first_name = "???";
    double age = 0;                     
    std::cin >> first_name >> age;    
    std::cout << "Age in months: " << age * 12 << '\n';          
    std::cout << "Hello, " << first_name << " (age in years: " << age << ")\n";
    keep_window_open();
}