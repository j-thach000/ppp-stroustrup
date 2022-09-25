#include "std_lib_facilities.h"

// simple program to exercise operators
int main()
{
    std::cout << "Please enter a floating-point value: ";
    double n;
    cin >> n;
    cout << "n == " << n << '\n'
         << "n + 1 == " << n+1 << '\n'
         << "three times n == " << 3*n << '\n'
         << "twice n == " << 2*n << '\n'
         << "n squared == " << n*n << '\n'
         << "half of n == " << n/2 << '\n'
         << "square root of n == " << sqrt(n) << '\n'
         << '\n';
    keep_window_open();
}