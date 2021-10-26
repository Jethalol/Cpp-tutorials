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

/* Using this for convinience only, to know which destructor is actually called. */

    void set_name(string name_val) {

      name = name_val;
    
    }

    

// Overloaded Constructors -

    Player() {  // Also called Default Constructor. C++ automatically creates deault constructor if no constructor is used.

      cout<<"No args constructor called"<<endl;
    }
// But when we have once made any constructor then C++ won't automatically make default constructor.

/* Tho constructor args doesn't really have same name as attributes (bcz creates confusion in assignment and 
leads to error)  but here we are not using them so no issues. */
    
    Player(string name) { 

      cout<<"String Constructor called"<<endl;

    }

/* We can have same name as attributes if we are init them using 
 Constructor initialization list syntax (we'll learn that later) */
 
// We can also implement constructors outside class just like methods 
// (anyway constructor are nothing but special type of methods)
   
    Player(string name, int health);

    Player(string, int, int);

  ~ Player() {

    cout<<"Destructor Called for "<<name<<endl;
  }

};

Player :: Player(string name, int health) {

    cout<<"Two args constructor called"<<endl;

}

Player::Player(string name, int health, int xp) {


  cout<<"Three args constructor called"<<endl;
}

int main() {

// Made this block only to show that when class object will go out of scope then destructor will be called automatically.
  
  {

  Player frank;
  frank.set_name("Slayer");
 
  } 

  {

    Player hero("Hero");
    hero.set_name("Hero");

    Player villain("Villian",100,12);
    villain.set_name("Villain");

    /* We don't really need this set name bullshit, Doing this only because we are not really init any value yet, 
    this constructor are only outputting statement as of now, only for example */

  }


    Player *joker = new Player;
    joker->set_name("Joker pointer");

    Player *boss = new Player;
    boss->set_name("Boss pointer");

    delete joker;
    delete boss;

  return 0;
}