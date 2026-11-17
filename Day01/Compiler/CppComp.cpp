
#include <iostream>

#define poop int
// now it will look for the word poop and replace it with int


#if 1
// lets us include or exclude code given a condition
// it also fades out to show that it is not being compiled
// 1 = true, 0 = false btwww


int main()
{
    int a = 5;
    int b = 10;
 int result = a*b;

    std::cout << result << '\n';
    
#include "EndBrace.h"
// Include the EndBrace.h file to ensure that the closing brace is attached
#endif

