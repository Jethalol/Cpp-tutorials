/* Delgating Constructor - */

#include <bits/stdc++.h>
using namespace std;

class Player {

public :

    string name;
    int health;
    int xp;

  public :
    
// Overloaded Constructors -

/* Usually a three args constructor is used to delgation constructor (we can use others too but 3 args more practical) */

/* One special property of delegating construct is that - both the body of caller and delegation will get executed.
i.e. if no-args constructor delegates to three args construct - then first the three args constructor body will get executed
then the no-args body will get executed */

  Player(string name_val, int health_val, int xp_val) : name {name_val}, health {health_val}, xp {xp_val} {

      cout<<"Inside three args constructor."<<endl;
  }


    Player () : Player{"None",0,0} {  

        cout<<"Inside no-args constructor."<<endl;
    } 

    Player (string name_val, int health_val) : Player{"atik",500,0} { /* Now this will work as arguments for three-args (the
    actual passed argument for matching constructor will be given more priority as always) */

          cout<<"Inside two args constructor."<<endl;
    }


};

  
int main() {

  Player atik; // no args called -> gets delegated to 3 args -> 3 args body executes -> back to no-args -> no-args body executes
  cout<<endl;

// two args called -> gets delegated to 3 args (with 2 args arguments) -> 3 args body executes -> back to no-args -> no-args body executes
  Player frank("Atik ji Mansuri",4580); 
    cout<<endl;
  
  Player random{"Atik", 4780, 44990};    
  cout<<endl;
 

  return 0;
}