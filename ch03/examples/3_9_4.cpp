#include "std_lib_facilities.h"

// demonstrate the use of {} initialization 
// it prevents narrowing conversion and has the compiler spit out and error
int main()
{
    double x {2.7};
    int y {x};      
}