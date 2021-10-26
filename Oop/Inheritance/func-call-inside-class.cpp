#include <bits/stdc++.h>
using namespace std;

class Base {

public :    // Public is accessible by everyone,everywhere.
    
    int a{0};

protected : // Protected is accessible by Base class and inherited sub class.

    int b{0};

private :   /* Private is only accessible by base class. (tho it will also be inherited but not accessible by sub class,
/*              we can always use getters and setters to play with it :p ) */

    int c{0};

    public :

        void display() {

            std::cout<<a<<" "<<b<<" "<<c<<std::endl; 
        }

        void set_c(int m) { c = m; } 
  // Member methods have access to all attributes and funcs of a class.

  // Note : friend function/class have also access to all.  

};

class Derived : public Base  {  //( private Base, protected Base also exist,but not generally used.)

// With public inheritance - (In general public inheritance is use. Check comments for diff in pub/pvt/prot)

    // a will be public
    // b will be protected
    // c will not be accessible 

    public :

        void access_base_member() {

            a = 100; //Ok
            b = 200; // Ok
          //  c = 300; // Error, Not accessible
        }

      void set_c() {

          Base::set_c(180); /* we can call base:: method from derived's. Do remebers that class don't support function calls
          /* (since they mistook it for func declaration) so we can only call a func inisde a class from another func or constructor. */
          
          cout<<"Inside derived"<<endl;

      }
};

int main() {

cout<<"====Base class members access from base' object======"<<endl;

    Base b1;

    //Ok (since public)

    b1.set_c(50);
    
    b1.display();

cout<<"======= Derived class' object==="<<endl;

    Derived d1;

    d1.a = 400;

    d1.set_c(); /* Here we can't pass argument in set_c because compiler first looks for definition of set_c in 
    derived::set_c() and on not founding it then compiler check in Base::set_c(int m) but since we have specialised 
    Derived::set_c() so Base::set_c won't be considered.
    */

    d1.display();



}
