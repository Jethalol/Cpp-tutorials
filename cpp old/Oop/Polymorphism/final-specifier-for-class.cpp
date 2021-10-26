/* final specifier in C++ 11 can also be used to prevent inheritance of class. If a class is marked as final then it becomes non inheritable and it cannot be used as base class. 

The following program shows use of final specifier to make class non inheritable : */

/* #include <iostream>
class Base final
{
};

class Derived : public Base	// error: cannot derive from 'final' Base 
{
};

int main()
{
	Derived d;
	return 0;
} */

/* we can also have a final derived class i.e. It have been sub classed from Base but it doesn't allow sub-classing from
itself */

#include <iostream>
class Base 
{
};

class Derived final : public Base
{
};

class sub : public Derived // Error - Can't Sub from Derive since it is final.
{

};

/* class sub : public Base { }; Tho this won't have any problem at all since Base isn't final */

int main()
{
	Derived d;
	return 0;
}
