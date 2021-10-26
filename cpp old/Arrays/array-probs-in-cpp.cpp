#include <iostream>
using namespace std;

// void fun(int n) {

// 	int arr[n];


// }
int main(){


/* Designated Initialization isn't allowed in C++ 
	int arr[10] = {[5]=66, };	
*/

/* Variable length array is also not supported by C++, since in C++ Arrays are constant expression (tho it might work 
with some compiler since compiler provides support for it BUT it is advisable to not use it )
	
	int size {};
	 cout<<"Enter the size? ";
	 cin>>size;
	
		int arr[size]; // Might throw error 
*/

/* Tho Variable length array is totally allowed in Dynamic memory allocation

	int size{};
	cin>>size;
	int *ptr = new int[size]
*/

	// int n{};
	// fun(n);	This is also an example of Variable length array which might throw error in C++.

	return 0;
}