/* Some basics of cin and cout, check comments after prog */
#include <iostream>
using namespace std;

int main() {
    int b=5;
    int a=9;
    float f=7.99;
    char c = 'm';
    
    cout<< "This is tutorial 4, the value of a is "<<a<<".\nThe value of b is "<<b<<" and the value of f is "<<f<<".\nAnd c is "<<c ; 
    
    /* Just like printf() we can print different data type in one statement with cout.
     Also in cpp we don't need to mention format specifier with variable name, we just need to write var name 
     out of string and with << insertion operator. Just like above example.
    */

    int q,p;
    
    cout<<"Enter the value of q and p : ";
    cin>>q>>p;
    
    cout<<endl<<"The value of q anf p is  "<<q <<" "<< p <<" respectively";  /* Why we did <<" "<< ?...... */

    return 0;
}
/*
<< = This is called insertion operator, used with cout, prints data on screen.

>> = This is called extraction operator, used with cin, takes input from user. */

/* Why we did <<" "<< ? Because Unlinke printf or scanf where we could give space between format specifier and program will print 
the space too ( since they were all inside string "..."), In Cout the variable doesn't need any format specifier and they're outside string
so no matter how many space we give between them (for example cout<<q     << p; it would be equvivalent to writing cout<<q<<p;) thats why we 
have to manually give space between q and p for that we input a string with just a space in it (or as many space as we may need) and it'll as it is
get printed on screen. */