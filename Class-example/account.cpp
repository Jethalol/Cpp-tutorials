#include <iostream>
#include "acc1.h"
using namespace std;

void Account::deposit_amt(int dp) {

    bal = bal + dp;

// we are allowed to use private data member 'bal' bcz deposit_amt is member func of Account

    cout<<bal<<endl;
}

void Account::withdraw_amt(int wd) {


    bal = bal - wd;

    cout<<bal<<endl;

}
