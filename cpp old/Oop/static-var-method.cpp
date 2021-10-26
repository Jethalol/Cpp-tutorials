#include <bits/stdc++.h>
using namespace std;

class Account {

private :

    int balance;    // Instance Member variable / data member / attribute
        
    static int rate;    // Static Member variable / Class variable

 public :

        static void set_rate(int r);    // Class Function

        static int get_rate(void) {return rate; } 
};

    // class-name:: is also called membership lable (FYI)

    int Account::rate = 3;

    void Account::set_rate (int r) {    // static method can use static variables only.

        rate = r;
    }

    // int Account::get_rate(void) { return rate; }

    int main() {

      /* We can call and use static variable and static function without needing any object unlike instance member variable
      which needs an object to call them (since basically object is an instance of class) */

/* Account::rate = 9; if rate was public then we could just access it with this syntax - 
  Class-name::var-name
  since it is private we will use static method (since static method have access to static members (only) ) */


        Account::set_rate(45);

        cout<<Account::get_rate();

        return 0;

    }


