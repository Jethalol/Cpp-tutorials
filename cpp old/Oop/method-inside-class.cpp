// One more way of using methods is explained using files explained with example project.  

// Just like we say function definition, In class you might see using words like Method in place of function and 
// Implementation in place of Function. Both things are same and just wording is different.

#include <iostream>
using namespace std;

class bank {

// Private : or anyway its private by default until specified public or protected specifically.
  int bal{4000};
  string name;
  char appear;

  public : // Everything below this will now be public until specifically changed

 /* If we define the function inside class then we don't not need to declare it first, we can directly 
  define the function. 

   Methods defined inside class itself is inlined by compiler automatically, thats why only small Methods (aka functions)
   are advised to be Implemented inside class. (aka define inside class itself ) */

  void withdraw(int wd) {

    bal = bal - wd; // member function can use private data members, so its not a problem.
    cout<<"Inside withdraw, total balance is : "<<bal<<endl;
  }


};

int main() {


  bank b1;

  
  b1.withdraw(400);

  return 0;
}
