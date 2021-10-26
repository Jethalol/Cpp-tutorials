/* In C we could only perform splicing (or line-break) with String but in Cpp with help if insertion << operators we can splice both string and
printing part(e.g. variable's value) of program */

#include <iostream>
using namespace std;

int main(){

  
/*  GIVES AN ERRROR 
 cout<<"You have to dream before your dreams can come true.
  -- APJ Abdul Kalam."); */    
  
  // SPLICING Will print desired output but there will be additional space printed thats the space b/w line start till --A
  // (since indentation of second line.)

  cout<<"\n You have to dream before your dreams can come true.\
      --APJ Abdul Kalam. ";    

 // This is one of the best method since it doesn't print any extra spaces.

  cout<<"\n You have to dream before your dreams can come true"
         "--APJ Abdul kalam.";
 
 // We can do the above qoutes method with indirection operator << which will give us more benifit

  cout<<"\n You have to dream before your dreams can come true"
      <<"--APJ Abdul kalam.";

  // The one benifit of using indirection << is that we can use it with variables or expressions too which increases readability of our program.
  
   int x = 55, y = 99;
  
   cout<<"\nX is : "<<x<<endl    // Don't add semicolon, it'll be added only at the end!
   <<"Y is : "<<y
      <<"\nSum of x and y = "<<(x+y);    
   
   return 0;
}