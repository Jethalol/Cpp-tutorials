#include <iostream>
using namespace std;

int main() {
    int b=5;
    int a=9;
  cout<<"This is a tutorial 4. Here the value of a is "<<a<<". The"
    "value of b is "<<b;     
/* Did Line splicing but i got highly confused because ....*/
    return 0;
}

   /* Line splicing but i got highly confused because harry's code was working even without line splicing that is -

cout<<"This is a tutorial 4. Here the value of a is "<<a<<". The
    value of b is"<<b;  

    while my code was getting error in the same, the reason being harry has turned on a vs code feature which is 
    *Word Wrapping* what it does is, it wraps one line into two  if the line is really 
    long, (just visually but in reality they're still one single line) so effectively its just one line thats why harry
    didn't need line splicing in his code while mine was showing an error. */