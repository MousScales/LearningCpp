#include <iostream>
#include <cmath>

double power(double, double);// delcaration could also put in a header file

int main()
{
    int base, exponent;
    std::cout << "Whats the base?\n";
    std::cin >> base;
    std::cout << " Whats the exponent? \n";
    std::cin >> exponent;
    // above we just grabbed the numbers fornthe base and exponent
    double process = power(base, exponent);
    // in the () these are arguments
    // then we call the above function to be able to use the process
    std::cout << "Your answer is... " << process;
    // then we use the function as an output as the function returns the result not main
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