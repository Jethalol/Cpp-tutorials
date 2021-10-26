/* By definition, an abstract class in C++ is a class that has at least one pure virtual function (i.e., a function that
has no definition). The classes inheriting the abstract class must provide a definition for the pure virtual function;
otherwise, the subclass would become an abstract class itself.
*/

 /*	You can not instantiate an object from a base class (that is making object of base class will give error) 
Base classes are  generally made Abstract, An abstract base class is usually too general to make an object from, for eg -
a class Account, we open Saving account, trust account (derived classes) etc but do we ever open just Account? but derive
 classes like saving/trust accounts can be used and we make their object and use their virtual func 
But we will hardly have any use of shape itself thats why it is made Abstract */

/* In order for a class to be an abstract it must have a pure virtual function - Pure virtual function are just normal
method with " = 0" in DECLARATION 
*/

#include <bits/stdc++.h>
using namespace std;

class Account {

    public :

/* Usually pure virtual function are not implemented but we can implement them if we want */

    virtual void withdraw(int amount) = 0; // pure virtual function

    virtual ~Account() { cout<<"Inside Account::Destructor"<<endl; } 

    /* Now all derived class destructor will be virtual too */


};

 /*  void Account::withdraw(int amount) {	if we want to implement pure virtual function, we have to do it seperate from
 /*								declaration since declaration must have = 0 to make it pure virtual func anyway it doesn't
 /*								usually make sense to implement a pure virtual function.

	  cout<<"pure vitual inside"<<endl;
  } */

/* Derived Class MUST override the base class' pure virtual function, these type of class(that we have been using up to 
this point are called Concrete class (since it have all implementations ) ) */

class Savings : public Account {	// Concrete class

    public :


  virtual void withdraw(int amount) {   
    cout<<"Inside Savings::withdraw."<<endl;
            
    }

    virtual ~Savings() { cout<<"Inside Savings::Destructor"<<endl; }    
};

/* if we don't override base class virtual function then the derived class will also become Abstract (that is we won't
be able to instatiate object of that class.) */

class Trust : public Account {	// Abstract Class

    public :

	// inherits pure virtual function withdraw

    virtual ~Trust() {cout<<"Inside Trust::Destructor"<<endl; }

};

class Checking : public Account {	// Concrete class

      public :

   virtual void withdraw(int amount) {

    cout<<"Inside Checking::withdraw."<<endl;
            
    }

    virtual ~Checking() {cout<<"Inside Checking::Destructor"<<endl; }
};

int main() {

  //  Account a1;  Error 
  //	Account *ptr = new Account();  Error

	cout<<"\n================================================================\n"<<endl;
  		
		  Account *ptr = new Savings(); // ok, Allowed

  		 Checking c1; //ok since concrete class
		 c1.withdraw(100);

  /* Trust t1;	Error since this class doesn't override pure virtual function
  hence it is abstract too. */

       cout<<"\n================Clean-up================"<<endl;  

		delete ptr;	// for ptr 
		cout<<endl;

		// now destructor would be called for c1 when it goes out of scope
        return 0;
}   

