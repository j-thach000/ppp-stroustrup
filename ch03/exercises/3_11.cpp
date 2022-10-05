#include "std_lib_facilities.h"

/*
11. Write a program that prompts the user to enter some number of pennies
(1-cent coins), nickels (5-cent coins), dimes (10-cent coins), quarters
(25-cent coins), half dollars (50-cent coins), and one-dollar coins
(100-cent coins). Query the user separately for the number of each size
coin, e.g., “How many pennies do you have?” Then your program should
print out something like this:
You have 23 pennies.
You have 17 nickels.
You have 14 dimes.
You have 7 quarters.
You have 3 half dollars.
The value of all of your coins is 573 cents.
Make some improvements: if only one of a coin is reported, make the
output grammatically correct, e.g., 14 dimes and 1 dime (not 1 dimes).
Also, report the sum in dollars and cents, i.e., $5.73 instead of 573 cents.
*/

// prompt user for coins
// store inputs
// print each coin amount
// calculate total in cents 

int main()
{
    // prompt and store user input for coins
    std::cout << "[Coin Counter]\n"
              << " - Input - \n"
              << "How many pennies do you have:      ";
    int amount_pennies = 0;
    std::cin >> amount_pennies;
    std::cout << "How many nickels do you have:      ";
    int amount_nickels = 0;
    std::cin >> amount_nickels;
    std::cout << "How many dimes do you have:        ";
    int amount_dimes = 0;
    std::cin >> amount_dimes;
    std::cout << "How many quarters do you have:     ";
    int amount_quarters = 0;
    std::cin >> amount_quarters;
    std::cout << "How many half dollars do you have: ";
    int amount_half_dollars = 0;
    std::cin >> amount_half_dollars;
    std::cout << "How many dollars do you have:      ";
    int amount_dollars = 0;
    std::cin >> amount_dollars;

    // print coin quantities 
    std::cout << " - Output - \n";
    if (amount_pennies > 1 || amount_pennies == 0)           std::cout << "You have " << amount_pennies      << " pennies.\n";
        else                                                 std::cout << "You have " << amount_pennies      << " penny.\n";
    if (amount_nickels > 1 || amount_nickels == 0)           std::cout << "You have " << amount_nickels      << " nickels.\n";
        else                                                 std::cout << "You have " << amount_nickels      << " nickel.\n";
    if (amount_dimes > 1 || amount_dimes == 0)               std::cout << "You have " << amount_dimes        << " dimes.\n";
        else                                                 std::cout << "You have " << amount_dimes        << " dime.\n";
    if (amount_quarters > 1 || amount_quarters == 0)         std::cout << "You have " << amount_quarters     << " quarters.\n";
        else                                                 std::cout << "You have " << amount_quarters     << " quarter.\n";
    if (amount_half_dollars > 1 || amount_half_dollars == 0) std::cout << "You have " << amount_half_dollars << " half dollars.\n";
        else                                                 std::cout << "You have " << amount_half_dollars << " half dollar.\n";
    if (amount_dollars > 1 || amount_dollars == 0)           std::cout << "You have " << amount_dollars      << " dollars.\n";
        else                                                 std::cout << "You have " << amount_dollars      << " dollar.\n";

    // print value of coins in cents and dollars and cents
    double value_pennies       = amount_pennies;
    double value_nickels       = amount_nickels * 5;
    double value_dimes         = amount_dimes * 10;
    double value_quarters      = amount_quarters * 25;
    double value_half_dollars  = amount_half_dollars * 50;
    double value_dollars       = amount_dollars * 100;
    double total_cents         = value_pennies + value_nickels + value_dimes + value_quarters + value_half_dollars + value_dollars;
    double total_dollars_cents = total_cents / 100;
    std::cout << "Total cents:             " << total_cents << '\n';
    std::cout << "Total dollars and cents: " << "$" << total_dollars_cents << '\n';
}