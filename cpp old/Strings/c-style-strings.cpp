#include <iostream>
#include <cstring>	// for using c-style string functions

using namespace std;

int main() {

	char first_name[20] {};
	char last_name[20] {};
	char full_name[50] {};
	char temp[50] {};

	cout<<"Please enter your first name : ";
	cin>>first_name;

	cout<<"Please enter your last name : ";
	cin>>last_name;

	cout<<"-------------------------------"<<endl;

	cout<<"Hello "<<first_name<<" your first name has "<<strlen(first_name)<<" characters "<<endl;

	strcpy(full_name,first_name); //Copies first name to full name

	cout<<"Full name after strcpy : "<<full_name<<endl;

	strcat(full_name," wtf "); // concatenate full name and wtf (and two spaces that we gave in string).

	strcat(full_name, last_name);	// concatenate last name and full name.

	cout<<"\nYour full name (after strcat) is "<<full_name<<endl;


	cout<<"------------------------------------"<<endl;

		cout<<"Enter your full name : ";
		
		cin>>ws;
		cin.getline(full_name,50);  /* since normal cin gets ended after space so had to
/									 getline with arrays..... */

		cout<<"Your full name is : "<<full_name<<endl;

	cout<<"------------------------------------------------------------------"<<endl;

	strcpy(temp,full_name);	// Copies full name in temp

	if (strcmp(temp,full_name)== 0 ) {		// Compares the two string and returns...

		cout<<temp<<" and "<<full_name<<" are the same."<<endl;
	}
	else {
		cout<<temp<<" and "<<full_name<<" are different."<<endl;

	}
		cout<<"--------------------------------------------------------------"<<endl;		
	return 0;

}
/*
Getline Character Array
We can also define the getline() function for character array, but its syntax is different from the previous one.

Syntax

istream& getline(char* , int size);  

In the above syntax, there are two parameters; one is char*, and the other is size.

Where,

char*: It is a character pointer that points to the array.

Size: It acts as a delimiter that defines the size of the array means input cannot cross this size.
*/

/* strcmp(ptr1,ptr2) returns value after comparing

returns - meaning

<0 (less than 0)	the first character that does not match has a lower value in ptr1 than in ptr2

0(Zero)	the contents of both strings are equal

>0(greater than 0)	the first character that does not match has a greater value in ptr1 than in ptr2

*/