/* In Cpp every decimal literal is considered to be a double by default ( e.g. 3.4 is a double type variable and not float) To make it a float type
we will have to add suffix like 3.44f then it'll be considere as float type. Tho, its not needed when we're declaring var like float f = 3.44 but
writing float f = 3.44f isn't wrong either. we need suffix because..... */

/* Both capital and small suffix mean same thing, its just our choice whatever we wanna use - float = 3.44F or 3.44f both same */
#include <iostream>
using namespace std;

int main() {

   float x = 3.4;

// or flaot x = 3.4f or 3.4F; Both same, using f in declaration also won't have any bad effect, infact its a good practice in cpp becasue...*/

   double n = 1.44;
   long double y = 4.9L;   // long double y = 4.9 or long double y = 4.9l ; All are same.

   cout<<x<<endl<<y<<endl<<"Size of double n - "<<sizeof(n)<<endl;

   cout<<"Decimal literal 3.4 without data type is considered double by default - "<<sizeof(3.44)<<", viz actually since of double variable.\n"; 

   cout<<"Decimal literal with suffix f - "<<sizeof(3.44f)<<".\nSame literal with suffix l (long double) - "<<sizeof(3.44l)<<endl;

   cout<<"While the same value when it was declared float before - "<<sizeof(x)<<endl;

   return 0;

}

/* We need suffix and its a good practice before in function overloading and call by value if we just pass 3.44 then cpp will confuse it for
double, while writing it as 3.44f and 3.44l will clear the confusion */

/* We may not notice the difference in cin and cout since in cpp we don't need format specifier like we used to do in c, but it'll create 
problem for us in function overloading */