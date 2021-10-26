#include<iostream> 

using namespace std;

int main(){
    
 
  
// Rohan Das----> Monty -----> Rohu ------> Dangerous Coder

    float x = 455;

// Reference Variable - (All are legal ways to write) -      

     float & y = x; /* Don't confuse it with pointer, in pointer we used to assign addresses. Here we are... */
     float &n = y;
     float& p = x;  // Generally programmer write to avoid any sort of confusions.

    cout<<x<<endl;
    cout<<y<<endl<<n<<endl<<p<<endl;

    /* Making changes in any of variable will be equal to making changes in x, since all are nothing but just reference 
    name for it, Also Changes will reflect in all of them, obviously. */

    x++; // 456
    n--; // 455
    --p; // 454
    ++y; // 455

    cout<<x;

return 0;
  
}

