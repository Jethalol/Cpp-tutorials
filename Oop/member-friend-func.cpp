#include <bits/stdc++.h>

class Player; // Forward Delcaration / Class Protoype / Class Declaration (just like func prototype)
class Account;

class Account {

/*  We will get an error that Player is undeclared because we have defined player class after account class but we 
can solve that either by writing player class  before account or we can Declare Class protoype/ Class Declaration. 
(just like we do with function). So Compiler would know that Player is  a class. */
    
    private : 

        int balance {0};
       std::string name;

    public :

         void display_player(Player &p); 

  /* Even after forward declaring class (class prototype) we will still get class prototype error if we implement 
  this method here, because our class declaration can tell compiler to identify a class which is being used before 
  define but it can't give info about member variables, and in method define we would be using Player class' instance 
  variable (obv bcz that why we made friend func), so to save ourselve from that error. Defining the method after both
 classes definition is the easiest solution, that way compiler will know about instance variable */

};

class Player {

    private :

        int xp {1500};
        int health;
    
    public :

   friend void Account::display_player(Player &p);  /* Granting display_player() method of account class permission 
*                                                      to use Player attributes */
    
        
};

void Account::display_player(Player &p) {

/* passed as reference because i don't want to use copy construct overhead. Arg is of player
* type because its friend of player, so obviously it will use player's object to access their value */
      
        std::cout<<p.xp<<std::endl;
}


int main() {

    Account a1;
    Player p1;

   a1.display_player(p1);

    return 0;

}
