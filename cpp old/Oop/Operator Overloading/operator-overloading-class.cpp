#include <bits/stdc++.h>


class Account {

private :

    char *str; //pointer to char[] that holds C-style string.

public :

    Account();     //No-args constructor

    Account(const char *s); // overloaded constructor

    Account(const Account &source); // Copy Constructor

    ~Account(); //Destructor


    void display() const;   // getters

    int get_length() const; //getters

    const char* get_str() const;    //getters

};


// No args Constructor
Account::Account() : str {nullptr} {

    str = new char[1];

    *str = '\0';
}

// Overloaded Constructor
Account::Account(const char *s) : str{nullptr} {

    if(s==nullptr) {

        str = new char[1];

        *str = '\0';
    }

    else {

        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }


}

// Copy Constructor (Deep Copy)

Account::Account(const Account &source) : str {nullptr} {

    str = new char[std::strlen(source.str)+1];

    std::strcpy(str,source.str);


}

// Destructor

Account::~Account() {

    delete[] str;
}

// Display Method

void Account::display() const {

    std::cout<<str<<" : "<<get_length()<<std::endl;
}

// Length Getter

int Account::get_length() const { return std::strlen(str); }

// String Getter

const char* Account::get_str() const { return str; }


int main() {

    Account empty;  // no-args constructor

    Account frank {"Wtf nigga"}; // overloaded constructor

    Account rancho {frank}; // copy constructor

    empty.display();

    frank.display();

    rancho.display();


    return 0;

}
