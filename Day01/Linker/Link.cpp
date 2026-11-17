#include <iostream>

void Log(const char* message) 
{
    std::cout << message << std::endl;
}

int Multiply(int a, int b)
{

    Log("Multiplying numbers");
    return a * b;
}

int main(){


    std::cout << Multiply(5,7)

}

// whenever calling a linked fucntion it needs to match identically
// can use the term 'static' to know its only used in this file (internal)
// so it wont compile the function if its not called e.g Log wont be called if I comment out Multiply
