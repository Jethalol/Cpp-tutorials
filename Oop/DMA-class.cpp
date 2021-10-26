#include <bits/stdc++.h>
using namespace std;

class Player {

  public :
    
    // C++11 allows init inside class.            
    string name {"Atik Mansuri"};
    int health {100};
    int xp {50};


};

int main() {

  Player p1;
  Player p2;


  Player *ptr = new Player; // Uses no args default constructor () - we will read about constructors soon.

//  Player *ptr = new Player(); we can declare like this too, Uses no args default constructor () 
//- we will read about constructors soon.

/* We can also initialize Pointer to an object like this - */
 
    ptr->health = 4800;
    cout<<ptr->health<<endl;

  Player *st = new Player {"Random Name",4577,780}; // The order inside list init should be the same order of
  //                                           data member in class delcaratrion, Tho this sort of init doesn't work on
  // private member, thats when constructor init comes in picture, we'll learn that soon.

    cout<<st->name<<endl;
    cout<<st->health<<endl;
    cout<<st->xp<<endl;

    return 0;
}