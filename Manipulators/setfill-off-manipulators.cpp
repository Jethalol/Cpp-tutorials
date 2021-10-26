#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int i =10;

    cout<<i<<endl;
    cout<<setw(8)<<i<<endl;  

    cout<<setfill('*'); /* setfill(char) can only be used with setw because it fills the space in setw with given characters in setfill. */

    cout<<setw(15)<<i<<endl;

    cout<<setfill(' '); /* This turns off any previously declared setfill */

    cout<<setw(15)<<i; 
       
    return 0;
}
