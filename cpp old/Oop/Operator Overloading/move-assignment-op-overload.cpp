#include <bits/stdc++.h>


class Mystring {

private :

    char *str; //pointer to char[] that holds C-style string.

public :

    Mystring();     //No-args constructor

    Mystring(const char *s); // overloaded constructor

    ~Mystring(); //Destructor

    Mystring& operator=(Mystring &&rhs);

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


Mystring& Mystring::operator= (Mystring&& rhs) {    // move can't be const because we'll nullify rhs after use.

/* check for self assignment */

    if(this==&rhs) 
      return *this;
    
delete [] str; // clear any previous clutter from this->str so new one can be allocated (and no overwritten prob arises)

    // str = new char [std::strlen(rhs.str)+1];

    str = rhs.str;  // steals the pointer

    rhs.str = nullptr;  /* null the source i.e. we moved the source to our pointer, it's similar to shallow copy but in 
/*                    shallow copy both pointer points to one address but here we nullify the source address. */

    std::cout<<"Move called for temp object"<<std::endl;

    return *this;
    
}


// Destructor

Mystring::~Mystring() {

    std::cout<<"Destructor called"<<std::endl;
    
    delete[] str;

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

    Mystring a;  // no args constructor

    a = Mystring{"hola"};   // move operator since Mystring{hola} is temproary object i.e. r-value 

    /* a is the called object (i.e. this = &a), a.operator=(Mystring {hola}) */
    
    a.display();
                    
    return 0;

}
