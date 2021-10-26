#include <bits/stdc++.h>
using namespace std;

/* 

I assume that with interface you mean a C++ class with only pure virtual methods (i.e. without any code), instead with abstract class you mean a C++ class with virtual methods that can be overridden, and some code, but at least one pure virtual method that makes the class not instantiable. 

So Interfaces in C++ are basically just Abstract Class but they specifically work for one service only.

*/

class I_printable {   // can name it anything (but I_classname just to show that its Abstract interface class)

  friend ostream& operator<<(ostream &output, I_printable &source);   

    public : 

        virtual void print(ostream& output) = 0;    // pure virtual function


};


    ostream& operator<<(ostream &output, I_printable &source) {

        // output<<"Account Display";
        
        source.print(output);   // will check object type at run-time since print is virtual and invoke correct overridden method. now we won't have to use multiple friend func since print is virtual.

        return (output);
    }


class Account : public I_printable {

// Overloading << insertion operator

    public :

        virtual void print(ostream& output) {

            output<<"Account display";
        }

        virtual ~Account() { } 

};

class Savings : public Account {

    public :
        
          virtual void print(ostream& output) {

            output<<"Savings display";
        }

        virtual ~Savings() { } 

};


class Checking : public Account {

    public :
        
          virtual void print(ostream& output) {

            output<<"Checking display";
        }
        
        virtual ~Checking() { } 

    };

    
  
  

int main() {

  /*   Account a1;
    cout<<a1<<endl; // operator<<(cout,a1)

    Savings s1;
    cout<<s1<<endl;

    Checking c1;
    cout<<c1<<endl;

 Works as expected but what will happpen with Base class pointers, let's see - */

    Account *ptr = new Savings();

    cout<<*ptr<<endl;     // Now it shows us dynamically bounded desired result since now we used virtual function to 
    // output and not only friend function(which was statically bound.)

    Account *ptr2 = new Account();

    cout<<*ptr2;

    return 0;
}