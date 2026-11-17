#include <iostream>
// pre processor statement all things that start with # are pre processor statements
// its the first thing the compiler sees
// include will find the file and copy it into this file 
// <iostream> is a standard library file that contains the definition of std::cout and more.. this has all been pasted in

void Log(const char* message) 
{
    std::cout << message << std::endl;
}
// this is a function that would take in the c string and print it to the console


void Log2(const char* message); 



int main() {
// the entry point of the program, main is a function that returns an integer value

std::cout << "Hello World \n";
// things get executed line by line, this line will print "Hello World" to the console and then a new line
// The '<<' is a function same as cout.print think as opperators as functions
// the << pushes it to the console like Hellow world gets pushed to the console



Log("Hello World Log");
// we can now call this Log function to print to the console, this is a better way to do it because we can reuse this function in other files and we can change the implementation of this function and it will change everywhere   

Log2("Hello World Log2");
// we can now call this Log function to print to the console, this is a better way to do it because we can reuse this function in other files and we can change the implementation of this function and it will change everywhere   




// we have to compile the Log.cpp in order to se teh functions there
//g++ -std=c++20 -Wall -Wextra hello.cpp Log.cpp -o hello

// then we can run "./hello" to run the program




return 0;

}

// after pps gets evaluated then or file gets compiled and c++ turns into binary
// Configuration: a set of rules that is set for a building of a project
// Solution Platform: is the platform we are targeting, e.g., x86 targets window 32 bit
// every cpp file is compiled into a object file and they are compiled seperately
// the linker connects them

// ctrl + f5 runs the current file
// ctrl + shift + b builds the entire project
//