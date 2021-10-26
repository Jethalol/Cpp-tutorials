/* 
The standard streams have a boolalpha flag that determines what gets displayed -- when it's false, they'll display as 0
 and 1. When it's true, they'll display as false and true.

There's also an std::boolalpha manipulator to set the flag, so this: */

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    cout<<false<<endl;

    cout <<boolalpha;   
    cout<<false<<endl;
    
    cout<<noboolalpha;
    cout<<false<<endl;
    
    return 0;
}