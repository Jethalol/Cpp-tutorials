#include <bits/stdc++.h>


class Mystring {

private :

    char *str; //pointer to char[] that holds C-style string.

public :

    Mystring();     //No-args constructor

    Mystring(const char *s); // overloaded constructor

    // Mystring(const Mystring &source); // Copy Constructor

    ~Mystring(); //Destructor

    Mystring& operator= (const Mystring &rhs);

    void display() const;   // getters

    int get_length() const; //getters

    const char* get_str() const;    //getters

};


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

    std::cout<<"Normal overloaded constructor called"<<std::endl;
}

// Copy Constructor

// Mystring::Mystring(const Mystring &source) : str {nullptr} {

//     str = new char[std::strlen(source.str)+1];

//     std::strcpy(str,source.str);


// }


// Copy Assignment Operator (Deep Copy)

Mystring& Mystring::operator= (const Mystring& rhs) {

/* check for self assignment (here &rhs is address of rhs being compared to this (which is &b) since this always points
 to address of caller object and here b.operator=(a) b is the caller object ) */

    if(this==&rhs) // this is &b here if &b == &rhs i.e. &b == &a we are just self assigning so returns *this. 
      return *this;
    
delete [] str; // clear any previous clutter from this->str so new one can be allocated (and no overwritten prob arises)

    str = new char [std::strlen(rhs.str)+1];

    str = rhs.str;

    std::cout<<"Assignment op called"<<std::endl;
}

// Destructor

Mystring::~Mystring() {

    delete[] str;

    std::cout<<"Destructor called"<<std::endl;
}

// Display Method

void Mystring::display() const {

    std::cout<<str<<" : "<<get_length()<<std::endl;
}

// Length Getter

int Mystring::get_length() const { return std::strlen(str); }

// String Getter

const char* Mystring::get_str() const { return str; }


int main() {

    Mystring a{"Hello"};  // over-loaded constructor

    Mystring b; // no-args constructor 

    b = a; // b.operator=(a) is whats happening bts

  /* operator method is called by b, so this = &b and 'a' will work as source object (named it rhs here) */

    /* or a little hack to identify this in binary operator (operator with two operands) left side is always 
    the caller object just like here :  b = a; b is the caller object. */ 
    

        b.display();
        a.display();

        b = "This will also use assignment op"; /* temp literal will first call normal construct to make a temproray
    /*                                          object then that temp object will get passed as b.operator=(temp) */ 
                    
    return 0;

}

/* To save us from these temp object overhead we have move assignment just like we had move constructor, 
we will read that soon
/*
/*           Also - Mystring b = a; // will call copy construct to initialize b with a
/*
/*            b = a; // will call assignment operator since assignment happen in already initialized objects 

if we don't provide our own deep copy overloading assignment operator then compiler will provide its own 
assignment operator which does shallow copy, shallow copy is fine in most of the cases except when we have DMA pointers */