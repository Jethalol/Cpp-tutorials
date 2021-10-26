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

/* Array of objects */  
  Player arr[] = {p1, p2};

  arr[0].health = 78;

  cout<<arr[0].health<<endl;
  cout<<arr[1].health<<endl;

  /* It can be seen, Each object have its own identity */

 
 /* Vectors of object */

  vector <Player> v1 {p1};
 
    /* Lets pushback another vector in this vector, but that vector must be of type Player too, obviously. */

      v1.push_back(p2);
 
    return 0;
}