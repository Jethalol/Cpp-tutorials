#include <bits/stdc++.h>

using namespace std;

class Person {

    public :

        string name;
        int age;

    bool operator<(const Person &rhs) {

        // bool x = age<rhs.age;

        // cout<<x<<endl;

        // return x;

        return age<rhs.age;
    }
};

template <typename T>
T minimum (T a, T b) {

    return (a<b)? a : b ;   /* Calls overloaded < that returns 0 or 1 after evaluating age then
/*                       if (1)? then returns a or (0)? then returns b. */  

}



int main() {

    Person p1 {"Curly",50};
    Person p2 {"Moe",15};

    Person p3;

    p3 = minimum<Person>(p1,p2);    // will get a i.e. p1 or b i.e. p2 as return

    cout<<p3.name<<" is younger."<<endl;


    return 0;
}