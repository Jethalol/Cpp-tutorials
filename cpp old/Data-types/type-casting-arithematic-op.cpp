#include <iostream>
using namespace std;

int main() {

   /* Operation between int and float */

   int a = 21;
   float b = 4.3;       /*  +,-,*,/, are also type of Arithematic operator, we'll discuss more operators soon. */ 

   cout<<"\nSum of a+b = "<<a+b<<endl;
   cout<<"Subtraction of a-b = "<<a-b<<endl;
   cout<<"Multiplication of a*b = "<<a*b<<endl;
   cout<<"Division of a/b = "<<a/b<<endl<<endl; 

   /* Operation between int and int */
   /* We can also typecast data type according to our need */

      int p = 30, q = 4;

   cout<<"Sum of p+q = "<< p+q <<endl;
   cout << "Subtraction of p-q = " << p - q << endl;  /* as we already know giving space between non string part have no effect at all. */
   cout<<"Multiplication of p*q = "<<p*q<<endl;       /* i.e. <<p*q<< and <<   p*q   << is same */
   cout<<"Division of p/q (wrong output) = "<<p/q<<endl<<endl;

   /* as you can see here the division of p/q (30/4) should be 7.5 but we are getting outcome as 7 only its because int/int = int so to get 
   correct result we will have to type-cast our int into float or double. for example - */

   cout<<"Divison of p/q after type-casting is "<<p/(float)q<<endl;  /* We can also type-cast it as - */
   cout<<"Division of p/q after type-casting is "<<(float)p/q<<endl;

   cout<<"Divison of p/q after type-casting is "<<30/4.0<<endl;  /* Adding decimal after one of int value be it num or demo, will give result in float */
   cout<<"Division of p/q after type-casting is "<<p/float(q)<<endl;

   return 0;
}