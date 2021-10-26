/* Sometimes you don’t want to allow derived class to override the base class’ virtual function. C++ 11 allows built-in
 facility to prevent overriding of virtual function using final specifier. It can also be used in context of classes, 
 we will learn that in next tutorial. */
 
 #include <iostream>
using namespace std;

class Base
{
public:

	virtual void myfun() final {    // prevent further overriding 
	
		cout << "myfun() in Base";
	}
};

class Derived : public Base
{
	
public :

    // void myfun() Compiler Error - Can't override
	// {
	// 	cout << "myfun() in Derived\n";
	// }

   
};

int main()
{
	Derived d;
	
	d.myfun();
	
    return 0;
}
