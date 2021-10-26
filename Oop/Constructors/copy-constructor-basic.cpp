/* Copy Constructor Syntax : ClassName (const Class-Name& source)

Why reference is used is compulsory in copy constructor?
Ans : Because if we don't use reference then argument will get passed by value which will call copy constructor again and 
then again our parameter will become argument for that call which will again get passed by value that is we will be stuck
in recursive calls to pass by value to copy constructor. Thats why pass by reference is mandatory in copy construct.

Why const? 
Ans : Because in copy construct, we initialize one old by old obj, so just by mistake we don't mistakenly change our 
source/old object that's why const is best practice. 

For pointers we will have deep and shallow copy concept, we'll learn that further.*/

#include <bits/stdc++.h>
using namespace std;

class Account {

  private : 
      
      string name;
      int balance;
      int home;

  public :

      // Method which reads private attribute for us are generally called getters. this are just normal function, nothing special just the name.

        auto getname (void) {return name; } // also called getter function / Method.
      
        auto getbalance (void) {return balance; }

        auto gethome(void) {return home; }
      // Normal Constructor 

        Account (string name_val = "None", int bal_val = 0, int home_val = 0) 
        : name {name_val}, balance {bal_val}, home {home_val}  {
        
        }

      // Copy Constructor 

        Account (const Account& source_obj) : name {source_obj.name}, balance {source_obj.balance}, home {source_obj.home} 
        {
            cout<<"Copy constructor called for "<<getname()<<endl;
            
            // since name is a pvt attribute thats why we created getter to get name.
        
        }




};

    void fun (Account a3) { 

        cout<<"a1 is source object for a3 "<<endl;

        cout<<"a3 members : "<<a3.getname()<<endl;

    }

  int main() {

    Account a1; // User-defined default args constructor called.
    
    Account a2 (a1); // Initializes a2 with a1 (by calling copy constructor). a1 will be the source/old obj whose values
    //                  will get passed.
    
    fun(a1);  // Passes by value to regular function, that is a1 will get copied in parameter. 

    return 0;

  }

  /* When is a user-defined copy constructor needed?

  If we don’t define our own copy constructor, the C++ compiler creates a default copy constructor for each class which
 does a member-wise copy between objects. The compiler created copy constructor works fine in general. We need to define
  our own copy constructor only if an object has pointers 

  */