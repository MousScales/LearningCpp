#include <iostream>
#include <cmath>
// to use pow as pow is a math function
int main()
{
    int base, exponent;
    std::cout << "Whats the base?\n";
    std::cin >> base;
    std::cout << " Whats the exponent? \n";
    std:: cin >> exponent;
    std::cout << "Your Answer is " << pow(base, exponent);
    // when you place things like this seperated by a comma your raising frist value to teh next
}