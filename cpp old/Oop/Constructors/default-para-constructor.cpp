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

  Player (string name_val = "None", int health_val = 0, int xp_val = 0) {

    cout<<"All in one constructor called."<<endl;

  }

/*  Just a nice little hack to have all in one constructor. This constructor will act as default, as well as one arg, 
two arg, three arg. Since even if we pass one arg, the rest two will have default arg */
   
    /* With default parameter constructor no args constructor is neither needed nor should be used, because it'll generate
    error */
    
};

int main() {

  Player atik;

  Player frank("Atik ji Mansuri",4580);

  return 0;
}