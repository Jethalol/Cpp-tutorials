#include <bits/stdc++.h>
#include <cstring>
#include <iomanip>

class Mystring {

private :

    char *str; //pointer to char[] that holds C-style string.

public :

 // Constructors - 

        Mystring(); // no args constructor.

        Mystring(const char *s); // Normal Overloaded construct

        Mystring(const Mystring &source); // Copy construct

        ~Mystring();    // Destructor


// Getters and Setters -

        const char* get_str() const { return str; }

        int get_length() const { return ( std::strlen(str) ); }

        void display() {

           std::cout<<str<<" : "<<get_length()<<std::endl;

        }


 // Operators - 
    
    Mystring operator-() const;

    bool operator==(const Mystring &rhs) const;

    Mystring operator+(const Mystring &rhs) const;
};

// Operator overlaoding (tolower)   (unary - operator)
Mystring Mystring::operator-() const {

    char *buff = new char[std::strlen(str)+1];

    std::strcpy(buff,str);

    for(size_t i = 0; i<std::strlen(buff); i++) {

        buff[i] = tolower(buff[i]);

    }
    
   Mystring temp {buff};  // will call normal construct because we are init temp with normal ptr and not another obj.
    
/* Why are no args passed and why is buff holded in temp instead of return buff itself? 
We are working on unary operator (viz also a member func and wkt member func have this ptr which points to caller object) 
i.e. in unary operator the this will work for us (lhs/caller object), nor any rhs will be needed/passed as args.  
 We made normal pointer and then did operation on normal pointer and since we have to store the result in 
Mystring type object thats why we are making temp which will hold buff's value and return temp's value (Mystring type) 
to caller obj (larry2 viz also Mystring type). Also buff will create memory leak if we don't deallocate it after use */

        std::cout<<"Overloaded operator called"<<std::endl;

        delete [] buff;

        
        return temp;    /* This should call copy constructor since return by value but due to return value optimisation
/*                        (copy elision) the call to copy constructor is ommitted and object is directly copied */
}

/* Even when copy elision takes place and the copy-/move-constructor is not called, it must be present and accessible 
(as if no optimization happened at all), otherwise the program is ill-formed. */


// == operator overloading -

bool Mystring::operator==(const Mystring &rhs) const {

    if(std::strcmp(str,rhs.str)==0)     // str = this->str = lhs's str = caller object (viz in binary is left hand obj)
        return true;
    else 
        return false;

}

// Operator Overloading (String Concetenation) -

Mystring Mystring::operator+(const Mystring &rhs) const {

    char *buff = new char[std::strlen(str)+std::strlen(rhs.str)+1];
    
    std::strcpy(buff,str);

    std::strcat(buff,rhs.str);

    std::cout<<"Inside string concet overloaded operator"<<std::endl;
    
    Mystring temp {buff};

    delete [] buff;

    return temp;

}

// Deep Copy - (Due to return value optimisation it won't be used but still our prog should've it.)

 Mystring::Mystring (const Mystring &source) : str{nullptr} {

    str = new char[std::strlen(source.str)+1];

    std::strcpy(str,source.str);

    std::cout<<"Inside Deep Copy"<<std::endl;

 }

// No args Constructor
Mystring::Mystring() : str {nullptr} {

    str = new char[1];

    *str = '\0';

    std::cout<<"No args constructor called"<<std::endl;
}

// Overloaded Constructor
Mystring::Mystring(const char *s) : str{nullptr} {

    if(s==nullptr) {

        str = new char[1];

        *str = '\0';
    }

    else {

        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }

    std::cout<<"Normal overloaded constructor called for "<<str<<std::endl;
}

// Destructor

Mystring::~Mystring() {

    std::cout<<"Destructor called for "<<str<<std::endl;

    delete[] str;

}



int main() {

     Mystring larry1 {"Larry"};  // Normal overloaded constructor called

    Mystring larry2;    // No args constructor called 

    larry2 = -larry1; /* larry1.operator-() here larry1 itself is caller object and arg (since we know all member func
    have default argumen 'this' viz points to caller object) so no user args will be passed. */ 

    larry1.display();
    larry2.display();

    std::cout<<std::boolalpha<<std::endl;   // Manipulator (show 1 as true and 0 as false )

    std::cout<<(larry1==larry2)<<std::endl;

 /* larry1 == lary2 larry1.operator==(larry2) this pointer will hold larry1 (since caller object and this is 
  passed as hidden args in all memeber function) and larry2 will be passed as rhs  */    
    

    Mystring moe = larry1 + " is my name";  // larry,operator+("is my name") is my name will call normal construct to form temp object
    
        moe.display();

/*  Mystring moe = "My name is " + larry1 will give error because our operator (overloaded) is a member function and 
with member function, it is mandatory for the caller object to be passed as class obj (bcz of this ptr), 
here caller object is a C-style string which is not allowed */

/* Short trick - Caller object in Binary op - left side operand.
/*               Caller object in Unary op - The op itself. */

    Mystring two_stooges = moe + " " + " curly ";

    two_stooges.display(); 



}
