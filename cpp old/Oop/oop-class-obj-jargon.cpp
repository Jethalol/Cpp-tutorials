#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Names of C++ classes should begin with a capital letter, and not contain any hyphens (Mario '-' shario)

class Mario {	// Just like we created struct in C language but a lot better.

  public : 

	// attributes or Member Variable
    	
        string name;
	    int health;
	    int life;

  // methods or function 

	void talk(string);	// These are just function/method prototypes for now.
	bool alive();

  };

int main() {

    Mario player1;

      player1.name = "Atik";   // use member selection operator to select a member variable of the class
    
     // player1.alive();         // use member selection operator to call a member function of the class
.

    cout<<player1.name;

	return 0;
}

/* '*' is Dot or Member selection operator */
