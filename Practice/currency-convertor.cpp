#include <iostream>
using namespace std;

int main(){

    double dollars{0}; // Similar to writing dollars = 0, this is the new way of intializing a/c to C++ 11 standards.
    double INR{0.00};

    cout<<"======================================================================="<<endl;
    cout<<"\tWelcome to Currency Convertor"<<endl;
    cout<<"How many Dollars do you want to convert to INR? ";
    cin>>dollars;

    INR = dollars * 74.39;
    cout<<"$"<<dollars<<" is equivalent to Rs."<<INR;

    return 0;
}