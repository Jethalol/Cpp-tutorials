#include <iostream>
#include <iomanip>
using namespace std;

int main () {
  int n = 70;

//Stream Manipulator for decimal, hexadecimal and octal num...
    cout<<"======================Before showbase======================"<<endl;
    cout << dec << n << endl; // the dec manip isn't even neccesary since its the default value but used for demonstrate 
    cout << hex << n << endl;
    cout << oct << n << endl;
    

// Show base shows the base of number
     cout<<"======================After showbase======================"<<endl;
    cout<<showbase<<endl;

    cout<<dec<<n<<endl; // shows no difference (since base 10)
    cout<<hex<<n<<endl; // shows 0x base for hexadecimal number 
    cout<<oct<<n<<endl; // shows 0 base for octal number

    cout<<noshowbase<<endl; // stops showing base. (doesn't mean that oct value will return to dec, all below vals will
/*                          will now be in octal base (since last was oct) until specified differently */

// Showpos shows '+' sign before positive numbs

    int x = 50, y = -77;

     cout<<dec<<endl; // since last we used oct so  below values would be used in oct base if not set back to dec.

     cout<<"======================Before showpos======================"<<endl;
     cout<<"x : "<<x<<" y : "<<y<<endl;
    
     cout<<"======================After showpos======================"<<endl;
    cout<<showpos<<"x : "<<x<<" y : "<<y<<endl;




        return 0;
}