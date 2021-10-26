/* Const Method - for declaring a method as a const, we just need to add keyword const just before semicolon and end of function name
E.g. - void example(args) const; */

#include <bits/stdc++.h>
using namespace std;

class Atik {

private :
        string name;

public :

/* if we are implementing method outside of class then const keyword will be used in both specification and 
implementation and if defining method inside then obviously const will be used once */
 
        string getname() const ;

        Atik(string name_val="None") : name {name_val} { }

};

    string Atik::getname() const { return name; }

int main() {

    const Atik a1 {"Villian"};

        cout<<a1.getname();
    return 0;
}