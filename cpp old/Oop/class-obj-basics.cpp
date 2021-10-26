#include <iostream>
using namespace std;

class Player {  // class are private by default

// Access Modifier (Everything below public now will be public unless specifically set private)
public :  // set to public so main() and other funct can access it.

  // Data memebers or Attributes or Member Variables

  string name = "Atik"; // C++11 gave us freedom to declare attributes in class itself. They
  int xp = 10;          // can be modified later.
  int health = 100;

  // Member Function or Method
  void random(string lay) {
    
    cout<<name<<" says "<<lay<<endl; // method will look for 'name' in class itself first
    //                                and then in global scope.
  }

};

int main(){

  Player p1;
  
  cout<<p1.name<<endl;
  
  p1.random("yo bro! how you doing? "); // Calling member function before changing name

  p1.name = "Shirf";

  p1.random("yo bro! how you doing? "); // Calling member function after changing name

  cout<<p1.name<<endl;

  cout<<"xp is : "<<p1.xp<<endl;  // will show value declared in class for now, if not declared 
  //                              then they might have shown garbage value instead.
  
  cout<<"Health is : "<<p1.health<<endl;

  return 0;
}