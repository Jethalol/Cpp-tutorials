/* endl is also a Manipulator */
/* endl vs \n - example to understand differences */
#include <iostream>
using namespace std;

int main(){

    cout<<"My name is Atik Mansuri"<<endl;
    cout<<"\n I live in \n Ratlam."<<endl<<endl;
    cout<<endl<<"I am current in"<<endl<<"Indore.";

    return 0;
}

/* SOME BASIC TAKE-AWAYS -->

<<endl and \n works the same tho there are few differences between them, such as -

1. cout << endl  : Inserts a new line and flushes the stream

   cout << "\n"  : Only inserts a new line.

2. We cannot write endl in between double quotation while we can write \n in between double quotation like 
   cout<<“\n”; it is right but cout<<“endl”; is wrong.

3. endl is manipulator while \n is character. */