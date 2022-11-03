#include "std_lib_facilities.h"

int main()
try {
    string s = "Success!\n";
    for (int i = 0; i < s.size(); i++) // set termination criteria to be i < s.size() which is the number of elements in string s
    {
        cout << s[i];
    }
    cout << '\n';
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