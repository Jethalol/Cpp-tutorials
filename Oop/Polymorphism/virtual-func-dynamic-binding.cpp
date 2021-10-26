#include <bits/stdc++.h>
using namespace std;

class Account {

    public :

    virtual void withdraw(int amount) { /* Virtual functions are dinamically bound throughout class herirachy but*/


    cout<<"Inside Account::withdraw."<<endl;
            
    }


/* but - The prototypes of a virtual function of the base class and all the derived classes must be identical. 
If the two functions with the same name but different prototypes, then compiler won't override them or give error 
instead C++ will consider them as the static overloaded functions which can be disasterous. (for that we have override 
specifier keyword, we'll learn that in next tutorial. )

We cannot have a virtual constructor, but we can have a virtual destructor

*/

};

class Savings : public Account {

    public :

  virtual void withdraw(int amount) {   // virtual keyword in derived classes is not mandatory but its best practice to add it

    cout<<"Inside Savings::withdraw."<<endl;
            
    }



};

class Trust : public Account {

    public :

  virtual void withdraw(int amount) {

    cout<<"Inside Trust::withdraw."<<endl;
            
    }



};

class Checking : public Account {

      public :

   virtual void withdraw(int amount) {

    cout<<"Inside Checking::withdraw."<<endl;
            
    }


};

void fun(Account& acc_obj) {  // Normal Global func which acceps Account object (we can also pass object derived from account)

    cout<<"Inside pass-by-ref account object normal function"<<endl;

    acc_obj.withdraw(400);
}

int main() {

    cout<<"\n================Base-class Pointers================"<<endl;
    Account *p1 = new Account;
    Account *p2 = new Savings;
    Account *p3 = new Trust;
    Account *p4 = new Checking;


    cout<<"\n================Arrays================"<<endl;
    
    Account *arr[] = {p1,p2,p3,p4}; // array of pointers to Account

        for(auto i=0; i<4;i++) {

            arr[i]->withdraw(100);
        }

    cout<<"\n==============Base-class Reference=================\n"<<endl;

        Account a1;

        Account &ref = a1;

        ref.withdraw(100); // Invokes Account::withdraw perfectly fine

        cout<<endl;
        
        Savings s1;

        Savings &ref2 = s1;

        ref2.withdraw(100); // Invokes Saving::withdraw perfectly fine

        cout<<endl;

        fun(a1);   

        cout<<endl;
        
        fun(s1);    // unlike static binding, now this will call Saving::withdraw because of dynamic binding.


    /*  
        delete p1;
        delete p2;
        delete p3;
        delete p4; deleting polymorphic object may result in undefined behaviour. if we have a class with virtual functions
                    then it must be provided with virtual destructor. syntax - virtual ~class-name(); yes its that simple.
                    we will see its implementation in next tutorial.*/
    return 0;
}

/* Virtual functions are dynamically bound only when we call them by Base class pointer or reference, otherwise they are
statically bound */

/* You see just by over-riding function here we have our desired output -

    Account::withdraw
    Saving::withdraw
    Checking::withdraw
    Trust::withdraw

this is because in run-time polymorsphism, the compiler identify what type of object is actually is actually used and
then accoring to that it chooses which method to call. */

/* Also this Binding problem obviously only arrises in Reference to Base object or Base class pointer

for example - Base *ptr = new Derived;
or          void fun (const Base &derived_obj_passed);

Other than that - in shits like -

    Base b1;
    Derived d1;
etc won't have any binding problem, they'll work the same in both kind of binding since they are pretty straight forward
without any mishaps. */
