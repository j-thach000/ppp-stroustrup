#include "std_lib_facilities.h"

int main()
try {
    vector<int> v(5); // missing type
    for (int i = 0; i <= v.size(); i++) cout << "Success!\n"; // remove semicolon so print statement is in loop body
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