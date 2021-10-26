/* Here we discussed few things that make C++ array different from C arrays otherwise they are identical. Topics : 
Size of Array, Elements in Array, Empty Uniform Initialization with Array, Variable size array */

#include <iostream>
using namespace std;

int main(){

// Initialize all elements to 0
int arr[5]{ };

	for(auto i : arr) {
		cout<<i<<" ";
	}
	
	cout<<"\nSize of (whole) array is : "<<sizeof(arr)<<" bytes"<<endl;
	cout<<"Number of Elements in array are : "<<( sizeof(arr)/sizeof(arr[0]) )<<endl;
	return 0;                                   // sizeof(array name)/sizeof(base element of array)
}

/* In C++ arrays, we can't use variable length initializer since in c++ arrays are considered as constant length */
	// int n;
	// int arr[n];

	// cin>>n will either produce error or work undefined.