#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int i =10;

    cout<<i<<endl;

    cout<<setw(8)<<i;  /* setw(n) means giving desired width to the number we gonna print. Here there are 6 spaces since 10 itself takes 
/                       2 char space so total being 8 which we have passed as n*/


    return 0;
}
