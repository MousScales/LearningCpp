#include <iostream>

using std::cout;
int main (){

int slices = 5; // declration then initialization
// int -> is a data type
// slices -> is the identifier
// = -> is the assignment operator 


int pop; // declaration

pop = 7 + 1; //initialization

cout << pop << '\n';
// '\n' is a manipulator just like endl just makes a new line after output


cout << "You have " << slices << " slices of Pizza" << std::endl;
// have to prefix endl because we dint do that ealrier we only mention std for cout
// if we did that at the beggining it would be fine e.g std::cout << pop << endl; is acceptable


printf("%i\n",slices);
// a function from c and lets us print the integer slices
// so %i = integer
// ngl cout wayyy better never use this iagl






}