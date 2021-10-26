/* Constructor initialization list */

#include <bits/stdc++.h>
using namespace std;

class Player {

public :

    string name;
    int health;
    int xp;

  public :
    
// Overloaded Constructors -

    /* With the assignment way of initialization in constructors, their is a slight delay but with the new C++11 
    Constructor Initialization list that has been solved and new way of initialization is introduced - */

    Player () : name {"None"}, health {0}, xp {0} {

        cout<<"no args constructor called."<<endl;

        /* We can write anything we wish to write in construct body or we can leave it blank too*/
    } 

    Player (string name_val, int health_val) : name {name_val}, health {health_val} {

      cout<<"Two args constructor called."<<endl;
    }

    Player (string, int, int);  // Just like methods, we can also define constructors outside class.
    
    /* Player (string name_val, int health_val, int xp_val); both are same, you can use any but second type of decalration
     is more clearer for readability */

};

  Player::Player(string name_val, int health_val, int xp_val) : name {name_val}, health {health_val}, xp {xp_val} {

      cout<<"Three args constructor called."<<endl;

  }

int main() {

  Player atik;

  Player frank("Atik ji Mansuri",4580); // () Calls matching constructor

  Player random{"Atik", 4780, 44990};   // {} this also calls matching constructor. 

  /* We can use anything we wish */

  return 0;
}