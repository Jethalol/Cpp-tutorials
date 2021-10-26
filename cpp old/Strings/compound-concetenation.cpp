#include <iostream>
using namespace std;

int main(){

    string s1 {"My name is Atik "};

    // Just like compound assingment operators with interger, with string class too we can use compound assignment concetenation operator to easily concetenate strings.

    s1 += "Mansuri";
    
    cout<<s1<<endl; 

    // Not Allowed
    // s1 += " "+ "Mansuri" + "I am greatest";
    return 0;
}