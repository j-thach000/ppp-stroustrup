#include "std_lib_facilities.h"

// read and compare names
// demonstrate == operator for comparing strings
int main()
{
    std::cout << "Please enter two names\n";
    std::string first;
    std::string last;
    std::cin >> first >> last;
    if (first == last) std::cout << "That's the same name twice\n";
    if (first  < last) std::cout << first << " is alphabetically before " << last << '\n';
    if (first  > last) std::cout << first << " is alphabetically after " << last << '\n';
    keep_window_open();
}