#include <iostream>
#include <string>   // For using cpp string functions.

using namespace std;

int main() {

	string myname{};
	int myage{};

	cout<<"Enter my age : ";
	cin>>myage;

	cout<<"My name (without spaces) is : ";	// since after space cin>> terminates.
	cin.ignore();	// To clear input stream which had '\n' from last cin, otherwise next cin won't work.
	cin>>myname;

	cout<<"Enter name with spaces using getline : ";
	string name{};

	getline(cin.ignore(),name);

	cout<<"My age : "<<myage<<endl<<"My name : "<<myname<<endl
		<<"Name : "<<name<<endl;
	
		name = "Assigning name with = is only possible in cpp strings";	// would've given us error in c-style string.
		cout<<"Updated name with the help of assignment operator : "<<name<<endl;
	return 0;

}

/*	getline syntax = getline(input stream,nameostring);

We can also use getline() as -

cin.ignore();	// clears stream buffer before calling getline
getline(cin,nameofstring) ;

*/