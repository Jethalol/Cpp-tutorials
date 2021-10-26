#include <bits/stdc++.h>
using namespace std;

class Account {

// Overloading << insertion operator

    friend ostream& operator<<(ostream &output, Account &source);   // friend functions are not inherited 

    public :

        virtual void print(ostream& output) {

            output<<"Account display";
        }

        virtual ~Account() { } 

};

    ostream& operator<<(ostream &output, Account &source) {

        // output<<"Account Display";
        
        source.print(output);   // will check object type at run-time since print is virtual and invoke correct overridden method. now we won't have to use multiple friend func since print is virtual.

        return (output);
    }

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