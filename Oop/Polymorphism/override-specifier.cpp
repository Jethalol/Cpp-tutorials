#include <bits/stdc++.h>
using namespace std;

class Account {

    public :

    
   /* Virtual functions are dinamically bound throughout class herirachy but but if we change its return type or args by 
   mistake then compiler won't show error, instead it would statically bind that method considering it as method 
   overloading, this adds power in C++ but also can be disasterous if we by mistake change a method which shouldn't 
   be changed since compiler isn't going to show us any error, So how can we prevent it?
   
   We can use override specifier at the end of function declaration in Derived class and now compiler will show us 
   error if we try to change that particular function */


    virtual void withdraw(int amount) const { // const isn't needed or anything just wrote it fyi


    cout<<"Inside Account::withdraw."<<endl;
            
    }

    virtual ~Account() { cout<<"Inside Account::Destructor"<<endl; } 

};

class Savings : public Account {

    public :

  virtual void withdraw(int amount) const override {    /* override keyword will give us error if we make any mistake in   
/*                                                 method overriding */
    cout<<"Inside Savings::withdraw."<<endl;
            
    }

    virtual ~Savings() { cout<<"Inside Savings::Destructor"<<endl; }   
};

class Trust : public Account {

    public :

  virtual void withdraw(int amount)  override { /* see here we forgot to add const, Without override keyword - our prog 
/*                         would have run fine and statically binded our virtual method but with override it, 
/*                         we will get an error message, which'll save us from making silly mistakes */        
   
    cout<<"Inside Trust::withdraw."<<endl;
            
    }

    virtual ~Trust() {cout<<"Inside Trust::Destructor"<<endl; }

};


int main() {

    Account *p1 = new Account;
    Account *p2 = new Savings;
    Account *p3 = new Trust;
   

    cout<<"\n================Arrays================\n"<<endl;
    
    Account *arr[] = {p1,p2,p3}; // array of pointers to Account

        for(auto i=0; i<2;i++) {

            arr[i]->withdraw(100);
        }

       cout<<"\n================Clean-up================"<<endl;  

            delete p1;   // since its a base class, only base class destructor called
            cout<<endl;

            delete p2;   // first derived class destructor called then base class destructor called 
            cout<<endl; //  (recall - constructor/destructor call topic)

            delete p3;   
            cout<<endl;
            
        return 0;
}

