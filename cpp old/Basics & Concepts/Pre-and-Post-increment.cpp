#include <iostream>
using namespace std;

int main()
{

	int x = 10, a = 0 ;
  
	cout << "Value of x before post-incrementing "<<x<<endl;

	cout <<"x = " << x<<endl;

	a = x++;

	cout <<"Value of x after post-incrementing"<<endl;

	// First expression executed and then assignment run thats why a will get old value of x 
	cout <<"x = " << x<<" and a = "<<a<<endl;

    int p = 5, q = 0;

    cout<<"Value of p before pre-increment "<<p<<endl;

    //First increment happens and then expression is executed thats why both p and q will get new value of p 
    cout<<"Value of p is "<<p<<" and value of q is "<<q<<endl;

    // Post-Increment in cout itself

    int i = 5;

        cout<<"Value of i is "<<i++<<endl; /* Since expression gets evaluated first i.e. i = 5 but i gets incremented after execution of express. */

        cout<<"Value of i after execution of expression in post-increment is "<<i<<endl;
    
    // Pre-Increment in cout itself 

        int j = 6;

        cout<<"Value of j in pre-increment is "<<++j<<endl; /* Here first increment happens and then assignment therefore j = 7 */

        
	return 0;
}
