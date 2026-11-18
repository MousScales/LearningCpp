#include <iostream>

using std::cout;
// only does the declaration for cout so better option that the namespaace option
// putting it here applies it to entire program where if I put it in a function it would only apply there
int main()
{
    using namespace std;

  cout << "Hello World\n";
  // allows me to use all items in the namespace with prefexing
  //"using directive" -> can run intp naming conflicts

  //use this 
  std:: cout << "Hello World\n";
}

//g++ "filename" -> thats how to compile
// then ./a.exe -> is how we can run it



