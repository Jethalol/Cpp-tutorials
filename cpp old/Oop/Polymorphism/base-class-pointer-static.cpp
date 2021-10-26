#include <bits/stdc++.h>
using namespace std;

class Account {

    public :

    void withdraw(int amount) {

    cout<<"Inside Account::withdraw."<<endl;
            
    }



};

class Savings : public Account {

    public :

    void withdraw(int amount) {

    cout<<"Inside Savings::withdraw."<<endl;
            
    }



};

class Trust : public Account {

    public :

    void withdraw(int amount) {

    cout<<"Inside Trust::withdraw."<<endl;
            
    }



};

class Checking : public Account {

      public :

    void withdraw(int amount) {

    cout<<"Inside Checking::withdraw."<<endl;
            
    }


};

void fun(Account& acc_obj) {

    cout<<"Inside pass-by-ref account object normal function"<<endl;

    acc_obj.withdraw(400);
}

int main() {

    cout<<"\n================Pointers================"<<endl;
    Account *p1 = new Account;
    Account *p2 = new Savings;
    Account *p3 = new Trust;
    Account *p4 = new Checking;


    p1->withdraw(100);
    p2->withdraw(200);
    p3->withdraw(300);
    p4->withdraw(400);

  /* Isn't it too long? What if we could group them? YES! we can, since all of this different account are basically 
  'is-a' account, we can make an array or vector to group them- */

    cout<<"\n================Arrays================"<<endl;
    
    Account *arr[] = {p1,p2,p3,p4}; // array of pointers to Account

        for(auto i=0; i<4;i++) {

            arr[i]->withdraw(100);
        }

      cout<<"\n================Vectors================"<<endl;

        vector <Account *> v1 {p1,p2,p3,p4};

            for(auto vec : v1) {

                vec->withdraw(100);
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

        fun(a1);  /* Calls fun and pass a1 by reference which later invokes Account::withdraw through acc_obj which
*                  is perfectly fine since object passed is also of Account type */        
        cout<<endl;

        fun(s1);

/* But what if we pass saving class object in fun(s1) (since fun is of Account type and Saving is-a Account so its legal )
But now in static binding our acc_obj (alias name for s1 here) will still invoke Account::withdraw because for function
fun acc_obj is of Account type and since static binding (Early binding) is done on compile time so it won't take object's
actual type in consideration, we can achieve that with dynamic binding that we'll learn in next tutorial */


    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}

/* Right now, you might see all output as - 

Inside Account::withdraw.
Inside Account::withdraw.
Inside Account::withdraw.
Inside Account::withdraw.

Because there is static binding (Early/Compile time binding) here because ptr is a pointer to Base, At Compile time
Compiler doesn't take the type of object that it is holding in consideration, thats when Run time (Dynamic/Late binding)
comes into picture, we will learn about its use in next tutorial. */  

/* Also this Binding problem obviously only arrises in Reference to Base object or Base class pointer

for example - Base *ptr = new Derived;
or          void fun (const Base &derived_obj_passed);

Other than that - in shits like -

    Base b1;
    Derived d1;
etc won't have any binding problem, they'll work the same in both kind of binding since they are pretty straight forward
without any mishaps. */
