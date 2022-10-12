#include "std_lib_facilities.h"

/*
this function isn't that useful since it does two logically separate actions
calculate a square
print a square
it's too specific
*/
void print_square(int x) // void because we don't want to return a value specifically
{
    std::cout << x << '\t' << x*x << '\n';
}

int main()
{
    for (int i = 0; i < 100; i++) print_square(i);
}