#include <bits/stdc++.h>
using namespace std;

void print_addr(int *, int ); // Prototype, Can also write as - print(int [], int)

void print_ref( int (&) [3] );


int main(){

	int arr1[] {1,2,3,4,5};
	int arr2[] {10,20,30};

	const size_t arr1_size =  sizeof(arr1)/sizeof(arr1[0]);

	cout<<"Array 1 : ";
	print_addr(arr1, arr1_size);	// Writing array name is similar to writing address to first element of that array
	//					In passing by reference with address, here we also have to pass the order of array with it.

	const size_t arr2_size = sizeof(arr2)/sizeof(arr2[0]);
	cout<<"Array 2 : ";
	print_ref(arr2,arr2_size);	

	return 0;
}
// Since we passed this array by adress and arr is a pointer to first element, therefore iteration using range based
// for loop is not possible because ultimately for each loop need sequence to loop through and it checks
// std::begin() and std::end() viz isn't possible in pointer to first element case. Anyway, we can always use traditional
// for loop without any hassle.

void print_addr(int arr[], int size) { // Or we can also write as - void print(int *arr, int size)

	for(int i{0};i<size;i++) {

		cout<<arr[i]<<" ";
	}
		cout<<endl;
}

// For each loop will work in this because here, x is just an alias for array.
void print_ref(int (&x)[arr2_size] ) {

	for(int i : x) {

		cout<<i<<" ";
	}
		cout<<endl;

}
