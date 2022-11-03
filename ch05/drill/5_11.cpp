#include "std_lib_facilities.h"

int main()
try {
    string s = "ape";
    bool c = true; // boo => bool
    if (c) cout << "Success!\n"; // insertion operator syntax error: < => <<
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