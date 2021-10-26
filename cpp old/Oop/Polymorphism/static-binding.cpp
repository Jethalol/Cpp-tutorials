#include <bits/stdc++.h>
using namespace std;

class Base {

    public :

        void say_hello() const {
            
            cout<<"Hello, I am base. "<<endl;  
        }


};

class Derived : public Base {

    public :    // if we specialise/re-define a method then we will have to provide our own access specifier for it

        void say_hello() const {  // Specialized method, even tho say_hello was inherited but we still defined ours.

            cout<<"Hello, I am Derived. "<<endl;
        }


};

    void greetings(const Base& obj) {   // Non member normal functions

        cout<<"Grettings : ";
        obj.say_hello();

    }

int main() {


    Base b1;
    b1.say_hello(); // Base::say_hello() okay since thats what we expect

    Derived d1;
    d1.say_hello(); // Derived::say_hello() okay since thats what we expect

    greetings(b1);  // Base::say_hello() okay since thats what we expect

    greetings(d1);  /* Yes we can pass Derived object in a function that expects Base class argument because Derived is a 
/*                Base. BUT, this will also call Base::say_hello() because &obj is of Base type. */

    // This is when Dynamic binding comes in picture, we'll learn that soon.

    Base *ptr = new Base();  // Base::say_hello() okay since thats what we expect
    ptr->say_hello();

    Base *ptr2 = new Derived(); // Since Derived is a Base, this is legal.
    ptr2->say_hello();  // this also invokes Base::say_hello() because it considers ptr to a base object without 
    /*        considering our memory allocation at run time. This is what by deault binding (static binding) is in 
    C++. We will learn about Dynamic binding soon, which will help us solve this problems. */

    
    delete ptr;
    delete ptr2;

    return 0;
}