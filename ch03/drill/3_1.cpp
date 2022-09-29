#include "std_lib_facilities.h"

// drill 3 
int main()
{
    // 1
    std::cout << "Enter the name of the person you want to write to\n";
    std::string first_name;
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ",\n";                    
    // 2
    std::cout << "    How are you? I am fine. I miss you." << '\n'      // this is example text that the book suggests
              << "    The days get shorter as winter comes." << '\n';
    // 3
    std::string friend_name;
    std::cout << "Enter the name of a friend you want to mention\n";
    std::cin >> friend_name;
    std::cout << "    Have you seen " << friend_name << " lately?\n";
    // 4
    char friend_gender = 0;
    std::cout << "Enter the gender of the friend \n";
    std::cin >> friend_gender;
    if (friend_gender == 'm') std::cout << "    If you see " << friend_name << " please ask him to call me.\n"; // lol
    if (friend_gender == 'f') std::cout << "    If you see " << friend_name << " please ask her to call me.\n"; // lol
    // 5
    int age;
    std::cout << "Enter the age of the friend you're writing to\n";
    std::cin >> age;
    std::cout << "    I hear you just had a birthday and you are " << age << " years old.\n";
    if (age <= 0 || age >= 110) simple_error("you're kidding!");
    // 6
    if (age < 12)  std::cout << "    Next year you will be " << age + 1 << ".\n";
    if (age == 17) std::cout << "    Next year you will be able to vote." << '\n';
    if (age > 70)  std::cout << "    I hope you are enjoying retirement." << '\n';
    // 7
    std::cout << "    Yours sincerely, \n\n\n"
              << "    James\n";
    keep_window_open();
    return 0;
}