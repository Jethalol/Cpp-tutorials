#include <bits/stdc++.h> // Includes most of important header at once.
using namespace std;

const double pi {3.14159};

double area_circle(double);	// Function prototype or function declaration 
// Not neccessary to write variable name of parameter, only data type is enough.

//  Function declaration - Gives func idea to compiler, used when func definition is after main, can use it when 
// func definition is before main too , it is a good practice to declare function before use.

// No matter how we define or declare function, program execution will always begin from main().

int main(){

	
	double radius{};

	cout<<"Enter the radius of the circle : ";
	cin>>radius;

	double ret_area;

		ret_area = area_circle(radius);	// Parameter or Formal Parameter

	// We are passing value of radius in area_circle function. It is known as Call by Value.
	
	cout<<fixed<<setprecision(2)<<ret_area<<endl;

	// ret_area holds returned value from function call, its data type should be the data type of value that function
	// is returning. we can also call function directly in cout. 
	return 0;
}

// Function Definition - 

double area_circle (double r) {	// Argument or Actual Parameter 
//					// Argument data-type is the data type of value that is passed as parameter in function call.

	double area = pi * r * r;

	 return (area);	// Since we are returning value of type double i.e why function is of double type.

}
