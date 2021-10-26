#include <bits/stdc++.h>
using namespace std;

class Account {

/* Overloading << insertion operator, friend function are not inherited and since friend is a non-member function so it can't be made virtual either that is it will be statically bound) */

    friend ostream& operator<<(ostream &output, Account &source);   // friend functions are not inherited 

/* We can implement operator overloading as member function too but then "this" pointer would become problem since
cout<<acc_obj = operator<<(cout,acc_obj) and this pointer expects caller object to be of Class type thats why it is
used as friend, otherwise acc_obj<<cout would look too odd! and not good practice to do so */  

    public :

        virtual void withdraw(int x) {

            cout<<"In Account::withdraw"<<endl;
        }
    
        virtual ~Account() { } 

};

    ostream& operator<<(ostream &output, Account &source) {

        output<<"Account Display";
        
        return (output);
    }

class Savings : public Account {

    /*    friend ostream& operator<<(ostream &output, Account &source); Friend func are not inherited. 
Also, if we do something like this then we will get output as Account Display and not Saving display even after friend function implementation, it is because friend function is not a member function (and since its not a member function it can't be made virtual that is it is statically bound.)   

    friend ostream& operator<<(ostream &output, Account &source);   // Won't do this since static*/

    friend ostream& operator<<(ostream &output, Savings &source);

    public :
        
        virtual void withdraw(int x) {

            cout<<"In Savings::withdraw"<<endl;
        }

        virtual ~Savings() { } 

};

    ostream& operator<<(ostream &output, Savings &source) {

        output<<"Savings Display";

        return (output);

    }

    class Checking : public Account {

          friend ostream& operator<<(ostream &output, Checking &source);

    public :
        
        virtual void withdraw(int x) {

            cout<<"In Checking::withdraw"<<endl;
        }

        virtual ~Checking() { } 

    };

    
    ostream& operator<<(ostream &output, Checking &source) {

        output<<"Checking Display";

        return (output);

    }

int main() {

  /*   Account a1;
    cout<<a1<<endl; // operator<<(cout,a1)

    Savings s1;
    cout<<s1<<endl;

    Checking c1;
    cout<<c1<<endl;

 Works as expected but what will happpen with Base class pointers, let's see - */

    Account *ptr = new Savings();

    cout<<*ptr;     // See it is displaying Account, it is because << is friend function and statically bound

/* We can solve this problem in two ways - making a virtual function in Base (Account class) or Making a new different
Abstract Class Interface and inherit from it (which is more neat tho both will do exactly same work). We will learn both
in next tutorial. */

    return 0;
}