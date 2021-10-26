#pragma once    // Include guard which is used to save us from double inclusion of same header.
using namespace std;
#include <string>

// It is mandatory to have all the prototypes in header file
class Account {

private :

    string name;
    int bal{0};

    // methods

public :

    void deposit_amt(int);
    void withdraw_amt(int);

};
