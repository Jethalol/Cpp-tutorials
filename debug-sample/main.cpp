#include <bits/stdc++.h>
#include <cstring>

class Mystring {

private :

    char *str; //pointer to char[] that holds C-style string.

public :

    Mystring();     //No-args constructor

    Mystring(const char *s); // overloaded constructor

    ~Mystring(); //Destructor


    void display() const;   // getters

    int get_length() const; //getters

    const char* get_str() const;    //getters

    Mystring operator-() const;

    Mystring (const Mystring &source);
};

// Deep Copy -

 Mystring::Mystring (const Mystring &source) {

    str = new char[std::strlen(source.str)+1];

    std::strcpy(str,source.str);

    std::cout<<"Inside Deep Copy"<<std::endl;

 }

// Operator overlaoding
Mystring Mystring::operator-() const {

    char *buff = new char[std::strlen(str)+1];

    std::strcpy(buff,str);

    for(size_t i = 0; i<std::strlen(buff); i++)
        buff[i] = tolower(buff[i]);

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

    std::cout<<"Normal overloaded constructor called"<<std::endl;
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

    Mystring larry1 {"Larry"};

    Mystring larry2;

    larry2 = -larry1; // larry1.operator-()

    larry1.display();
    larry2.display();

    return 0;

}
