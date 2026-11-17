#include <iostream>


void Log2(const char* message) 
{
    std::cout << message << std::endl;
}
// we need to declare this function before we can use it in a different file
// Declaring: telling teh compiler this function exists whther it does or not
// Defining: actually writing the function and what it does e.g. line 4: