#include <iostream>
using namespace std;

void ref_call(int&, int&);
void address_call(int *, int *);

int main(){

  int x = 5, y = 10;

/* 
   Call by reference - In C, we used to refer Call by Pointer/Address as Call by Reference but in C++, both are 
   treated separately, since in c++ we have reference type variable viz alias name for actual variable and making 
  change in it, shows up in actual var. One more benifit of use ref var is that we don't have to deal with headache 
  of pointers.  */

  // Call by Reference or Pass by reference = 
  
  cout<<"Value before reference call :  "<<"x = "<<x<<" "<<",y = "<<y<<endl;

      ref_call(x,y);
  cout<<"Value after reference call : "<<"x = "<<x<<" "<<",y = "<<y<<endl;

  /* In C, we used to refer to it as call by reference but here we call it Call by Address/ Pointer. Its working has no
  change from C. Here, we pass Address of Variable as Argument which is stored in Pointer Parameter. Due to memory 
  and pointer uses its generally less preferred in Cpp programming */

  // Call by Address or Pass by Pointer : 

  cout<<"Value before address call : "<<"x = "<<x<<" "<<",y = "<<y<<endl;

    address_call(&x,&y);
  cout<<"Value after address call :  "<<"x = "<<x<<" "<<",y = "<<y<<endl;

/* Both Call by Reference and Call by Address works in similar way and produces same result. Tho, In call by reference 
work is hassle-free since we don't have to care about pointer or memory addresses. */
 
  return 0;
}
/* int &x or int& x both are reference variable but generally int& x is preferred because writing int '&x', you may
confuse it as Address of x, thats why programmers generally write int& x */

void ref_call(int& m, int& n) {

  m = 50;
  n = 60;

}

void address_call(int *p, int *q) {


  *p = 100;
  *q = 200;
}