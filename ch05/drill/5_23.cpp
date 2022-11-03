#include "std_lib_facilities.h"

int main()
try {
    int i = 0;
    int j = 10; // define j and assign 10
    while (j >= i) --j;  
    if (j<i) cout << "Success!\n";
    keep_window_open();
    return 0;
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}