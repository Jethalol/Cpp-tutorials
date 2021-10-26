/* Inline Method and File inclusion already discussed.
Here, We will discuss how to define member function outside class (which should be done especially if method is big) */ 

#include <iostream>
using namespace std;

class bank {

// Private : or anyway its private by default until specified public or protected specifically.
  int bal{4000};
  string name;
  char appear;

  public : 

  void withdraw(int); // Method or Function Declaration.

};
/* Syntax - 
/ return type class-name :: method-name(parameter list) { .....  } */

// To Implement (define) Methods 
void bank::withdraw(int wd)  {  // for this function, compiler won't make inline request.

    bal = bal - wd; // member function can use private data members, so its not a problem.
    cout<<"Inside withdraw, total balance is : "<<bal<<endl;
  }

int main() {

  bank b1;

  b1.withdraw(400);

  return 0;
}
