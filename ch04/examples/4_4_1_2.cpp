#include <iostream>

int main()
{
    std::cout << "Hello, World!\n";
    std::cout << "Enter two integers: ";
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    std::cout << "The two integers were " << a << " and " << b << '\n';
}