#include <bits/stdc++.h>
using namespace std;

class Base {

private :

        int balance;

public :

        Base() : balance {0} { cout<<"No-args base constructor called"<<endl; }

        Base(int balance_val) : balance {balance_val} {

            cout<<"int Base constructor called"<<endl;
        }

/* i know that compiler provided copy construct and = operator would have been sufficient since our attribute
doesn't have raw pointers but i just wanted to demonstrate how slicing and all will work and how user-defined
(generally deep copy) will work in inheritance */

        Base(const Base &source) : balance {source.balance} {   
            
            cout<<"Base copy constructor called"<<endl;
        }

        Base& operator=(const Base& rhs) {

            if(this==&rhs)  // Checks for self assignment
                return *this;
        

            cout<<"Base overloaded operator called"<<endl;

            balance = rhs.balance;

            return *this;
        }
};

class Derived : public Base {

    // int balance ; inherited from base

    private :

        int doubled_balance;

    public :

        Derived() : doubled_balance {0} { cout<<"No-args Derived constructor called"<<endl; }

        Derived(int doubleBal_val) : Base{doubleBal_val}, doubled_balance {doubleBal_val} {

            cout<<"int Derived constructor called"<<endl;
        }
/* YES! we can pass Derived class object source (&d2) to Base class object because Derived 'is-a' Base. BUT only the 
Base part (i.e inherited balance) will get passed in Base class construct (viz make sense), the rest part will get 
sliced out */

        Derived(const Derived& source) : Base{source}, doubled_balance {source.doubled_balance} {

                cout<<"Derived Copy constructor called"<<endl;
                
        }
/* Overloaded operator also follows the same rule but here we will have to manually call Base::operator=() since operator
overloading doesn't have init list like constructor have, here also base part will only get passed to base object */

        Derived& operator=(const Derived& rhs) {

            if(this==&rhs)  // checks for self assignment
                return *this;   

                Base::operator=(rhs);   // invoking base class overloaded operator for the base-part of derived

                cout<<"Derived overloaded operator called"<<endl;

                    doubled_balance = rhs.doubled_balance;

                    return *this;
        }


};


int main() {

// cout<<"===========Base Class object Example ====================="<<endl;

//     Base b1;

//     Base b2{100};

//     Base b3 {b2};

//     b1 = b2;

cout<<"===========Derived Class object Example ====================="<<endl;

    Derived d1;

    Derived d2 {200};

    Derived d3{d2};

    d1 = d2;

    return 0;
}

/* Remember only no-args (default and default copy) constructors can be invoked automatically but parameterized and user
defined constructor have to be manually invoked */

/* We don't really need to invoke base contructor or define copy constructor at all but in case of User-define constructor
and Deep copy it is a must to invoke base constructor before derived one */