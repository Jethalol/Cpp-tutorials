// Using getline with Two Parameters
/* #include <iostream>
#include<string.h>

using namespace std;

int main(){

    string user_name; 

    cout << "What is your name? :" << std::endl; 

    getline(cin, user_name);    // getline(cin, str name)

    cout<<"\nWelcome to Simplilearn "<<user_name;

    return 0;

} */

// Using getline with three parameters
 /*
 
#include <iostream>
#include<string.h>

using namespace std;

int main(){

    string user_name; 

    cout << "What is your name? :" << std::endl; 

    getline(cin, user_name, ' ');   // getline(input stream, str name, delimiter)   

 // here the third is a delimiter, input after encountering that character stops.
//this character can be anything of our wish. Here we chose a space.

    cout<<"\nWelcome to Simplilearn "<<user_name;

    return 0;

}   */

// Using  cin.getline for Character Array 
#include <iostream>

#include<string.h>

using namespace std;

int main(){  

    char cars[50]; // array declaration

    cout<< "Enter the name of some cars: ";  

    // using getline function

    cin.getline(cars, 50);  // cin.getline(array name, char limit)

    std::cout << "\nCars list :"<<cars << std::endl;

    return 0;

}