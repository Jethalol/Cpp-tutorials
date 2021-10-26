/* Inheritance - Inheritance is one of the key features of Object-oriented programming in C++. It allows us to create 
 a new class (derived class) from an existing class (base class).

The derived class inherits the features (attributes & methods) from the base class and 
 can have additional features of its own.

*/
#include <bits/stdc++.h>
using namespace std;

class Base {

public :    // Public is accessible by everyone,everywhere.
    
    int a{0};

protected : // Protected is accessible by Base class and inherited sub class.

    int b{0};

private :   // Private is only accessible by base class. (tho it will also be inherited but not accessible by sub class)

    int c{0};

    public :

        void display() {

            std::cout<<a<<" "<<b<<" "<<c<<std::endl; 
        }

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

};

int main() {

cout<<"====Base class members access from base' object======"<<endl;

    Base b1;

    b1.a = 100; //Ok (since public)

   // b1.b = 200; // Compiler error ()

  //  b1.c = 500;   Compiler error (obv duh! its private. wkt, we can use getter/setter for this tho.)

    b1.display();

cout<<"=======Base class member access from Derived class' object==="<<endl;

    Derived d1;

    // d1.a = 400;

   // d1.b = 800;   Error (protected)

 // d1.c = 600; // Error (Not accessible)

    d1.display();

    return 0;
}

/* public, protected and private inheritance in C++
public, protected, and private inheritance have the following features:

1] public inheritance makes public members of the base class public in the derived class, 
   and the protected members of the base class remain protected in the derived class.

2] protected inheritance makes the public and protected members of the base class protected in the derived class.

3] private inheritance makes the public and protected members of the base class private in the derived class.

Note: private members of the base class are inaccessible to the derived class.

class Base {
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};

class PublicDerived: public Base {
    // x is public
    // y is protected
    // z is not accessible from PublicDerived
};

class ProtectedDerived: protected Base {
    // x is protected
    // y is protected
    // z is not accessible from ProtectedDerived
};

class PrivateDerived: private Base {
    // x is private
    // y is private
    // z is not accessible from PrivateDerived
};

*/