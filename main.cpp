#include <iostream>
//lesson 1.11
//Learning basic programs

int main()
{
    std::cout << "Enter an integer: ";
    int num0 {};
    std::cin >> num0;

    int num1{};
    std::cout << "Enter a second integer: ";
    std::cin >> num1;

    //do the resulting operators
    std::cout << num0 << " + " << num1 << " is " << num0 + num1 << ".\n";
    std::cout << num0 << " - " << num1 << " is " << num0 - num1 << ".\n";

    return 0;
}