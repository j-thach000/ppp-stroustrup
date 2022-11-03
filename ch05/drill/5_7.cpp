#include "std_lib_facilities.h"

int main()
try {
    int cond = 1;
    if (cond) cout << "Success!\n"; // cond was not defined 
    else cout << "Fail!\n";
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