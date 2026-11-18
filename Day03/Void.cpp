#include <iostream>
#include <cmath>

double power(double, double);// delcaration could also put in a header file

void print_pow(double base, double exponent)
// void funcitons dont return any value
{
    double process = power(base, exponent);
    std::cout << "Your answer is " << process;
}

int main()
{
    double base;
    int exponent;
    std::cout << "Whats the base?\n";
    std::cin >> base;
    std::cout << " Whats the exponent? \n";
    std::cin >> exponent;
    print_pow(base,exponent);
    // we call it back to return wtvr output we got from the power function
}

double power(double base, double exponent)// defintion
// in the () are paramaters
{
    double result =1;
    for(int i = 0; i < exponent; i++)
    // it runs through this as many times as the exponent
    // so first time since we start at 0 its 1 * base
    // then wtvr that is * base 
    // so on so forth
    {
        result = result * base;
    }
    return result;
    // outputs after the answer
}
