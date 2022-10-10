#include "std_lib_facilities.h"

/*
int main()
{
    std::cout << "Do you like fish?\n";
    string s;
    std::cin >> s;

    switch (s) // has to be int, char, or enum type
    {
        case "no":
            break;
        case "yes":
            break;
        default:
            break;
    }
    // selection based on string
}
*/

/*
int main()
{
    // alternatives
    int y = 'y';
    constexpr char n = 'n';
    constexpr char m = '?';
    std::cout << "Do you like fish?\n";
    char a;
    std::cin >> a;

    switch (a)
    {
        case n:
            break;
        case 'n': // error: duplicate case because the expression n is 'n'
            break;
        case y: // error: variable in case label
            break;
    }
}
*/

// sometimes we want the same action associated with a set of values, several case labels can be used for a single case
int main()
{
    std::cout << "Please enter a digit\n";
    char a;
    std::cin >> a;

    switch (a)
    {
        case '0': case '2': case '4': case '6': case '8':
            std::cout << "is even\n";
            break;
        case '1': case '3': case '5': case '7': case '9':
            std::cout << "is odd\n";
            break;
        default:
            std::cout << "is not a digit\n";
            break;
    } 
}

// next example was just showing what happens when we forget a break after each case