#include <iostream>
using namespace std;

struct C {
  C() {}
  C(const C&) { std::cout << "A copy was made.\n"; }
};
 
C f(C n) {    // On pass by value a copy constructor gets called

  cout<<"Inside function"<<endl;

  C g;

  return g; // On returning a object value the copy constructor should have been called but...

}
 
int main(){

  std::cout << "Hello World!\n";
  C m;
  C obj = f(m);

  return 0;
}

/* On returning value the copy constructor should have been called but since we are returning a temp local object 
due to the copy elison (return value optimisation) the call to copy constructor gets omitted and copy is returned. */

/* Even when copy elision takes place and the copy-/move-constructor is not called, it must be present and accessible 
(as if no optimization happened at all), otherwise the program is ill-formed. */

/* Suppose if our code was returning parameter -

    C f(C n) {

      return n; // In these case call to copy constructor will be made since its not a local temp object

      return C(); // Suppose we were returning temp object like this then Copy elision will definitely takes place.
    }

    */

/*   
Common limitations of copy elision are:

multiple return points
conditional initialization

*/