/* Constructor is a special type of member function of a class which initializes objects of a class.
It is special member function of the class because it does not have any return type. */

#include <bits/stdc++.h>
using namespace std;

class Player {

private :

    string name;
    int health;
    int xp;

  public :
    
// Overloaded Constructors -

   Player(string name_val) { 

        name = name_val;
      cout<<"String Constructor called"<<endl;

    }

    Player(string name_val, int xp_val) {

        name = name_val;
        xp = xp_val;

      cout<<"Two args constructor called."<<endl;

    }

  /* Since we made our own constructor, so now C++ won't automatically make a default constructor. Nonetheless its a 
  good practice to make our own constructor no args constructor that way our objects won't have any garbage value */ 
    
    Player() {

      name = "None";
      health = 0;
      xp = 0;
      cout<<"User defined No args constructor called"<<endl;
    }


   
    

  // ~ Player() { Compiler will automatically creates its own destructor.

  //   cout<<"Destructor Called."<<endl;
  // }

};

int main() {

  Player atik;

  Player frank("Atik ji Mansuri",4580);

  return 0;
}