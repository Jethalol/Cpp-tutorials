#include <iostream>

using namespace std;

/* two parameter template, these two para can be of same type or different as code demands */

template <typename T1, typename T2> void print (T1 a, T2 b) {

    cout<< a <<" "<<b<<endl;

}

class Person {

    public :
        string name;
        int age;

    friend ostream& operator<<(ostream& output, const Person& p);
};

ostream& operator<<(ostream& output, const Person& p) {

    output<<p.name;

    return output;

}

int main() {

    cout<<"====================== For primitive types =========================="<<endl;

        print<int,int>(10,20);

        print(80.00,'a');

        print('a',10);

    cout<<"====================== For object =========================="<<endl;
    
        Person p1 {"Atik",20};
        Person p2 {"Mansuri",20};

        print(p1,p2);

        return 0;
}