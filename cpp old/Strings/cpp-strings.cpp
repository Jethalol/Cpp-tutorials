#include <iostream>
#include <string>   // for C++ string must include

using namespace std;

int main(){
    
    // String Initialization different ways in Cpp string class - 

    // string x;    string is a class and x is its object member variable.
    // String is dynamic in size and always begin empty if not declared otherwise.

    string s1;    // Initializes to Empty
    string s2{};    // Initializes to Empty
    string s3{"Atik"};  // Atik
    string s4{"Atik Mansuri",3};  // Ati    {String, Length}
    string s5{"Chunnu Ajmeri",0,4}; //Chun  {String, Beggining Index,Length }
    string s6{s3};  //Atik

    string s7(4,'X');  //XXXX (Constructor style Initialization)
    
    cout<<"Different ways of initialising a string : "<<endl;
    cout<<"s1 : "<<s1<<endl;
    cout<<"s2 : "<<s2<<endl;
    cout<<"s3 : "<<s3<<endl;
    cout<<"s4 : "<<s4<<endl;
    cout<<"s5 : "<<s5<<endl;
    cout<<"s6 : "<<s6<<endl;
    cout<<"s7 : "<<s7<<endl;
 
 cout<<"------------------------------------------------------------------------------"<<endl;
    // Assigning and Accessing values in string, (In cpp string we can use assignment as well as relational operators)

    cout<<"Using Assignment operator with string : "<<endl;

    s1 = s5;    // This would've given us error in C-style string.
    s3 = s7;

    cout<<"\ns1 = s5 : "<<s1<<"\ns3 = s7 : "<<s7<<endl;
 
    cout<<"\nAssigning new value to string : "<<endl;
    
    s7[3] = 'F';
    cout<<"s7[3] : "<<s7<<endl; // Tho this subscript operator doesn't perform bound check.

 // We can aslo use .at method to access or change value of string object

    s7.at(2) = 'F';
    cout<<"s7.at(2) : "<<s7<<endl;   

   cout<<"\nAccessing values of string : "<<endl;
 cout<<s5[1]<<endl<<s5.at(2)<<endl;

cout<<"------------------------------------------------------------------------------"<<endl;

 // Concetenation of C++ strings (We can also concetenate one C & one Cpp string )
    
    cout<<"\nConcetenation of Cpp Strings : "<<endl;
    
    string part1 {"C++ is a "};
    string part2 {"Powerful language."};

    string sentence;

    sentence = part1 + part2;

    cout<<sentence<<endl;

      part1 = "I am the";
    part2 = "Greatest Singer in the world";

    sentence = part1 + " " + part2; // Adding space manually, just for information
    cout<<sentence<<endl;


// We can also concetenate one C and one C++ string 

    cout<<"Concetenation of C-style literal and Cpp string : "<<endl;
    
    string part3 {"My name is "};
    sentence = part3 + "is Atik";

    cout<<sentence<<endl;
 
    
    /*  But we can't Concetenate two C-style strings directly :

    sentence = "Hindi is my " + "Mother tounge";
 
    sentence = "Nice " + "Cold " +"Weather " + part1;
 
 Both of them will result in compiler error since we are adding more c style literal viz not allowed */

 // Tho this will work : (Because here there's atleast one cpp string with c-str literal)
   
   sentence = part1 + " Nice " + "Cold " +"Weather " + part3;
    cout<<sentence<<endl;

cout<<"------------------------------------------------------------------------------"<<endl;

 // for loop
 
    cout<<"Loops in string (Traditional & for each) : "<<endl;

    s1 = "Apple";

    cout<<"Traditional for loop - "<<endl;
    
        for(size_t i {0};i<s1.length();i++) { 
 
            cout<<s1.at(i);     // or s1[i]
            
        }           
        
     cout<<endl;
    
    cout<<"Range-based for loop - "<<endl;

    for(auto ch : s1) {

        cout<<ch;
    }
 
 cout<<"\n------------------------------------------------------------------------------"<<endl;

    cout<<"Using substr method : "<<endl;

    s1 = "This is a test for you!";

 // object.substr(Beginning index, length till which sub str.)
    
    cout<<s1.substr(0,4)<<endl; // This
    cout<<s1.substr(5,2)<<endl; // is
    cout<<s1.substr(8,6)<<endl; // a test

cout<<"------------------------------------------------------------------------------"<<endl;

 // Erase Method and Clear Method -

 cout<<"Using Erase Method : "<<endl;

    s3 = "This is a test!";
    s1 = "My name is Atik Mansuri.";

//  object.erase(start index, length)


    s3.erase(5,4);
    cout<<"\nErase s3 : "<<s3<<endl;
    
    // CLears entire String :
    s1.clear();  
    cout<<"Clear s1 : "<<s1<<endl;

   cout<<"-----------------------------------------------------------------------"<<endl;

// find and getline in separate prog already.
 
    return 0;

}