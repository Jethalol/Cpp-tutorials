#include <bits/stdc++.h>
using namespace std;

class Account {

    public :

    virtual void withdraw(int amount) { /* Virtual functions are dinamically bound throughout class herirachy but*/


    cout<<"Inside Account::withdraw."<<endl;
            
    }

    virtual ~Account() { cout<<"Inside Account::Destructor"<<endl; } 

    /* Now all derived class destructor will be virtual too */
/* 
We cannot have a virtual constructor, but we can have a virtual destructor

*/

};

class Savings : public Account {

    public :

  virtual void withdraw(int amount) {   // virtual keyword in derived classes is not mandatory but its best practice to add it

    cout<<"Inside Savings::withdraw."<<endl;
            
    }

    virtual ~Savings() { cout<<"Inside Savings::Destructor"<<endl; }    /* virtual keyword not mandatory in derived class
/*                                                                      But best practice to add it */
};

class Trust : public Account {

    public :

  virtual void withdraw(int amount) {

    cout<<"Inside Trust::withdraw."<<endl;
            
    }

    virtual ~Trust() {cout<<"Inside Trust::Destructor"<<endl; }

};

class Checking : public Account {

      public :

   virtual void withdraw(int amount) {

    cout<<"Inside Checking::withdraw."<<endl;
            
    }

    virtual ~Checking() {cout<<"Inside Checking::Destructor"<<endl; }
};

int main() {

    Account *p1 = new Account;
    Account *p2 = new Savings;
    Account *p3 = new Trust;
    Account *p4 = new Checking;

    cout<<"\n================Arrays================\n"<<endl;
    
    Account *arr[] = {p1,p2,p3,p4}; // array of pointers to Account

        for(auto i=0; i<4;i++) {

            arr[i]->withdraw(100);
        }

       cout<<"\n================Clean-up================"<<endl;  

            delete p1;   // since its a base class, only base class destructor called
            cout<<endl;

            delete p2;   // first derived class destructor called then base class destructor called 
            cout<<endl; //  (recall - constructor/destructor call topic)

            delete p3;   
            cout<<endl;

            delete p4;   
            cout<<endl;

        return 0;
}

