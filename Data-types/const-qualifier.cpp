#include <iostream>
using namespace std;

int main() {

    int a = 5;
    const int b = 7;    /* Const is a qualifier which makes value of a variable constant, i.e. we won't be able to change the value of 
/                        const variable throughout our program that is Const variable are assigned Read-only memory. */    

    cout<<a<<" and "<<b<<endl;

    a = 2;
    b = 9;  // will get an error because a is constant.
    cout<<a<<" and "<<b<<endl;



}