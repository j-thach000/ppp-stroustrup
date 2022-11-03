#include "std_lib_facilities.h"

int main()
try {
    vector<char> v(5);
    for (int i = 0; i <= v.size(); i++) cout << "Success!\n"; // remove semicolon so print statement runs
                                                              // change 0 to i in the termination condition to prevent infinite loop
                                                              // change <= to < to prevent out of range error
                                                              // last comment is wrong because we're not referring to any element in the vector
                                                              // we're just printing success
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