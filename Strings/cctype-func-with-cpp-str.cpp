#include <iostream>
#include <cctype>  // for using character based functions.
#include <string>   // for c++ string class and functions

using namespace std;

int main() {

	// char store_name[50];
	// char temp[50];

	string store_name;	// string is a class from string header-file.
	string temp;

	cout<<"Enter the Store name : ";
	getline(cin,store_name);

    temp = store_name;  // In cpp we can compare and assign string just like we do with ints. we don't need strcpy here.

    cout<<"Temp is : "<<temp<<endl; 


	for(int i = 0; i<store_name.size(); i++) {	// string-name.size() returns size of string in cpp string.
		
	    	store_name[i] = toupper(store_name[i]);
		 cout<<store_name[i]; // since we didn't used is alpha here so there is no need for adding spaces seperately	
	   
	    }
		
		
	return 0;

}

/*

size: sizeof() is a compile-time expression giving you the size of a type or a variable's type. It doesn't care about
the value of the variable. Strlen on the other hand, gives you the length of a C-style NULL-terminated string.

*/

/*	getline syntax = getline(input stream,nameostring);

We can also use getline() as -

cin>>ws;	// clears stream buffer before calling getline
getline(cin,nameofstring) ;

*/