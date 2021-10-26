#pragma once
#include <string>

class Account {

private :

    string name;
    int bal;

    // methods

public :

    int deposit_amt(int);
    int withdraw_amt(int);

} ;
