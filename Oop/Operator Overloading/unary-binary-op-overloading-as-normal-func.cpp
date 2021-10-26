#include <bits/stdc++.h>
#include <iomanip>
#include <cstring>

class Mystring {

    private : 
        char *str;

    public :

    // Constructors - 

        Mystring(); // no args constructor.

        Mystring(const char *s); // Normal Overloaded construct

        Mystring(const Mystring &source); // Copy construct

        ~Mystring();

    // Operators -

    /*  Declared non member func as friend so they can have access to pvt attribute, otherwise we'd have to use 
    getter/setter which would be tedious. */

          friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

          friend  bool operator==(const Mystring &lhs, const Mystring &rhs);

          friend  Mystring operator-(const Mystring &lhs);
       

    // Getters and Setters -

        const char* get_str() const { return str; }

        int get_length() const { return ( std::strlen(str) ); }

        void display() {

           std::cout<<str<<" : "<<get_length()<<std::endl;

        }

};
/*  No need for :: since it is a normal function and not a member method. This normal func are just declared as 
     friends and we know that friend func have access to pvt attributes.
   
    ALSO, since they're not Member function, So now 'this' pointer will not be passed hiddenly with object's address
     that is we will have to pass reference to Lhs and Rhs both in case of binary and reference to Lhs in case of Unary
     operator overloading.
    
*/

// String Concatenation operator 

    Mystring operator+(const Mystring &lhs, const Mystring &rhs) {   

        char *buff = new char [strlen(lhs.str) + strlen(rhs.str) + 1];

        std::strcpy(buff,lhs.str);

        std::strcat(buff,lhs.str);

        Mystring temp {buff};

        delete [] buff;

        return temp;

    }

// Equality operator 

    bool operator==(const Mystring &lhs, const Mystring &rhs) {

         if(std::strcmp(lhs.str,rhs.str)==0)
            return true;
        else
            return false;
    }

// tolower operator 

    Mystring operator-(const Mystring &lhs) {

        char *buff = new char[strlen(lhs.str)+1];

                std::strcpy(buff,lhs.str);

            for(size_t i=0;i<std::strlen(buff);i++) 
                buff[i] = tolower(buff[i]);

        std::cout<<"Inside tolower non-member operator func"<<std::endl;
        
        Mystring temp {buff};

        delete [] buff;
            
        return temp;

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


// Deep Copy - (Due to return value optimisation it won't be used but still our prog should've it.)

 Mystring::Mystring (const Mystring &source) : str{nullptr} {

    str = new char[std::strlen(source.str)+1];

    std::strcpy(str,source.str);

    std::cout<<"Inside Deep Copy"<<std::endl;

 }

// Destructor

Mystring::~Mystring() {

    std::cout<<"Destructor called for "<<str<<std::endl;

    delete[] str;

}

int main() {

    Mystring larry1 {"Larry"}; // Normal overloaded constructor called

    Mystring larry2;

    larry2 = -larry1; /* operator-(larry1) since op overloading isn't done in member func, so obj won't get called by
    /*               this pointer, thats why we will have to pass calling object itself as argument in Unary and in 
    /*               Binary both Lhs and Rhs would be passed. */ 

    larry1.display();
    larry2.display();

    std::cout<<std::boolalpha<<std::endl;   // Manipulator (show 1 as true and 0 as false )

    std::cout<<(larry1==larry2)<<std::endl; /* operator==(lhs,rhs) (since op isn't member func, In binary we will have
    /*                                      to pass both lhs and rhs as args) */
   

    Mystring moe = larry1 + " is my name";  /* operator+(lhs,rhs) */
    
        moe.display();

    Mystring two_stooges = moe + " curly ";

    two_stooges.display(); 

    return 0;

}



