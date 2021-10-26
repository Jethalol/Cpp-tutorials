/* Friend function - By granting a function friendship, we give it access to private and public member of the class.
Friend function can be a Normal non-member global function or Method of other class (but not the class itself 
it is accessing). Friend concept should be used only where it is utmost neccesary since it potential threat to
encapsulation by giving access to non member function. these non member methods gets acces to class attribute and
can even make changes to it. */


#include <bits/stdc++.h>

class Account {

/* Syntax - friend return-type fun-name(class obj which granted friendship ); 
Basically just add friend in prefix of func prototype. 

 Does not matter if we declare it private/public or out of any access specifier since its not a class function, 
 class' specifier have no effect on it. */

  friend void display_acc(const Account &a);
    
    private : 

        int balance;
       std::string name;

    public :

        Account(int balance_val = 0, std::string name_val = "None") : balance {balance_val}, name {name_val} { 

            std::cout<<"In default constructor"<<std::endl;
        }

};

class Player {

    private :

        int xp;
        int health;
    
    public :

   friend void set_play( Player &p);    
        
    Player(int xp_val = 0, int health_val = 0) : xp {xp_val}, health{health_val} {  }

};

void display_acc(const Account &a) {    // Const because i am using it just to display element (not neccesary )

    std::cout<<a.balance<<std::endl;
    std::cout<<a.name<<std::endl;
}

void set_play( Player &p) { 
/* passed as reference because i don't want to use copy construct overhead. Arg is of player
* type because its friend of player, so obviously it will use player's object to access their value */

    p.xp = 100;
    p.health = 50;

    std::cout<<p.xp<<std::endl;
    std::cout<<p.health<<std::endl;

}

int main() {

    Account a1;
    Player p1;

    display_acc(a1); 

  /* The reason why we are passing object in non-member friend func is because even tho friend func
    have access to all instance variable (aka attribute) but to use them they need an instance in first place 
    otherwise how would they access them. (Recall - Object is 'instance' of a class and thats why data member 
    also known as Instance variable.) */

    display_play(p1);

    return 0;

}
/*
Following are some important points about friend functions and classes: 
1) Friends should be used only for limited purpose. too many functions or external classes are declared as 
friends of a class with protected or private data, it lessens the value of encapsulation of separate classes 
in object-oriented programming.

2) Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.

3) Friendship is not inherited. if A is friend of B and B is friend of C then A is NOT friend of C. 

*/