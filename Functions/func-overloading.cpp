/* Function Overloading = Function overloading is a feature of object oriented programming where two or 
more functions can have the same name but different parameters. */

#include <iostream>
using namespace std;

void print(int);
void print (int, int);

void print(int x) {

	cout<<x<<endl;

}

void print(int m, int n) {

	m = 10, n = 20;

	cout<<m<<" "<<n<<endl;

}

int main() {

	print(5);
	print(100, 200);
	print('A');	// Will get promoted to int since no matching function with this type of argument.

	return 0;
}

/* How  Function Overloading works?
Exact match:- (Function name and Parameter)

If a not exact match is found:–

/    ->Char, Unsigned char, and short are promoted to an int.
/    ->Float is promoted to double

If no match found:
/     ->C++ tries to find a match through the standard conversion.

*/