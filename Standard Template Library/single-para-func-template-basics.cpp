#include <bits/stdc++.h>

using namespace std;

class Person {

    public :

        string name;
        int age;

    bool operator<(const Person &rhs) { // overloading < operator

        // bool x = age<rhs.age;

        // cout<<x<<endl;

        // return x;

        return age<rhs.age; // will return 1 if age < rhs.age, otherwise returns 0
    }
};

/* function template with single/same type of parameter */

template <typename T>
    
    T minimum (T a, T b) {  // Template function

    return (a<b)? a : b ;  // Does calculation for normal primitive types normally 
    
/* for object type calls overloaded < that returns 0 or 1 after evaluating age 
 then check happens in minimum's return condition if (1 or true)? then returns 'a' or (0 or false)? 
 then returns b. */  

}

/*
Where 
T (or any name of your wish ): It is a placeholder name for a data type used by the function. 
It is used within the function definition. It is only a placeholder that the compiler will
 automatically replace this placeholder with the actual data type of function call's argument.

class/typename : A class or typename keyword is used to specify a generic type in a 
template declaration.

*/


int main() {

    cout<<"==================== for primitive data types ========="<<endl;

       cout<<"int = "<<minimum<int>(10,20)<<endl; 

/* minimum <int> int is used in call to tell template about the type of data type 
(Although for simple data types it is not needed,compiler will automatically figure it out even 
if we don't specially mention it. Tho, for complex types, we need it.) 
Best practice is to mention it since it's mandatory to mention it in class templates
so its better to do it here as well.*/                            

       cout<<"double = "<<minimum(10.5,20.0)<<endl; // compiler will auto define type    
       cout<<"char = "<<minimum('A','c')<<endl;     
           
       

    cout<<"========================== for objects =============="<<endl;

    Person p1 {"Curly",50};
    Person p2 {"Moe",15};

    Person p3;

    p3 = minimum<Person>(p1,p2);    // will get a i.e. p1 or b i.e. p2 as return

    cout<<p3.name<<" is younger."<<endl;


    return 0;
}