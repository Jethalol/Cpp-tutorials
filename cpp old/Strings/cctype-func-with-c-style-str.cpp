#include <iostream>
#include <cstring>	// for using c-style string functions
#include <cctype>  // for using character based functions.
using namespace std;

int main() {

	char store_name[50];
	char temp[50];

	cout<<"Enter the Store name : ";
	cin.getline(store_name,50);

	// temp = store_name // Not allowed in c style string
		
        strcpy(temp, store_name);   // copies store_name data in temp

      cout<<"Temp is : "<<temp<<endl;  
	for(int i=0;i<strlen(store_name);i++) { //strlen() c-func which give length of null terminated strings
		
		if( isalpha(store_name[i]) ) { // Checks if the char is alphabet or not. Returns true if alphabet. cctype function
		
		store_name[i] = toupper(store_name[i]);
		 cout<<store_name[i]<<" ";	// Since we used isalpha it won't include spaces. anyway use isalpha for info only.
	   
	    }
		
	}	
	return 0;

}

/*
Getline for Char Array
We can also define the getline() function for character array, but its syntax is different from the previous one.

Syntax

istream& getline(char* , int size);  

In the above syntax, there are two parameters; one is char*, and the other is size.

Where,

char*: It is a character pointer that points to the array.

Size: It acts as a delimiter that defines the size of the array means input cannot cross this size.
*/
