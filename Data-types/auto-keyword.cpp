/* auto keyword

The auto keyword specifies that the type of the variable that is being declared will be automatically deducted from its
 initializer. In case of functions, if their return type is auto then that will be evaluated by return type expression
at runtime.
    
The variable declared with auto keyword should be initialized at the time of its declaration only or else there will be
 a compile-time error  */

 // C++ program to demonstrate working of auto
// and type inference

#include <iostream>
#include <typeinfo> // To use typeid function

using namespace std;

int main()
{
	// auto a; this line will give error
	// because 'a' is not initialized at
	// the time of declaration
	// a=33;

	// see here x ,y,ptr are
	// initialised at the time of
	// declaration hence there is
	// no error in them
	auto x = 4;
	auto y = 3.37;
	auto ptr = &x;
	cout << typeid(x).name() << endl;   // Output : i that is int                 
		<< typeid(y).name() << endl;    // Output : d that is double 
		<< typeid(ptr).name() << endl;  // Output : pi that is pointer to int  

	return 0;
}
