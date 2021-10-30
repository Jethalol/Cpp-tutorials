#include <iostream>
#include <vector>
#include <cctype>

#include <algorithm> // to use algorithm 
#include <list>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
class Person {

    std::string name;
    int age;

    public :

    Person() = default;

    Person (std::string name_val, int age_val ) : name {name_val}, age {age_val} {


    } 

// Overloading this operators because when we will use algorithm on primitive types they will work fine but on object type data type comparison isn't possible that's why overloading of operator becomes neccessary.
 
    bool operator<(const Person &rhs) const {

        return this->age < rhs.age;
    }

    bool operator== (const Person &rhs) const {

        return ( this->age == rhs.age && this->name == rhs.name );        
    }

};

// find an element in the container 

void find_test() {

    std::cout<<"\n==============================="<<std::endl;

    std::vector <int> vec {1,2,3,4,5};

    auto loc = std::find ( std::begin(vec),std::end(vec), 1);

/* Both std::begin(vec) and std::end(vec) are equal to vec.begin() and vec.end(). There is no difference. you can use any of your wish. vec.begin() gives pointer to beginning of vec and vec.end() gives iterator to one past the ending of vector... */

    if (loc !=std::end(vec) ) 
        std::cout<<"Found the number : "<<*loc<<std::endl;
    
    else
        std::cout<<"Couldn't find the number"<<std::endl;

    std::cout<<"\n==============================="<<std::endl;


    std::list<Person> players {

        {"Larry",18},
        {"Moe",50},
        {"Curly",21}
    };

    auto loc1 = std::find ( players.begin(),players.end(), Person {"Moe",50} );

    if(loc1 != players.end() )
        cout<<"Found Moe"<<endl;
    else
        cout<<"Moe not found"<<endl; 
}

// Count the number of elements in a container

void count_test() {

    vector <int> vec {1,2,3,4,5,1,2,1};

    int num = std::count ( vec.begin(), vec.end(),1);

    cout<<num<<" Occurences found for 1"<<endl;

}

// Count the number of occurences of an element in a container based on a predicate (condition) using lambda expression.

void count_if_test() {

    cout<<"\n=============================="<<endl;

    vector <int> vec {1,2,3,4,5,1,2,1,100};

    // count only if element is even -

    int num = std::count_if (vec.begin(), vec.end(), [] (int x) {return x%2 == 0; } );

        cout<<num<<" even numbers found"<<endl;

    num = std::count_if(vec.begin(), vec.end(), [] (int x) { return x%2 != 0; } );

        cout<<num<<" odd numbers found"<<endl;

}

// Replace occurences of elements in a container

void replace_test () {



    cout<<"\n=============================="<<endl;

    vector <int> vec {1,2,1,4,5,22,67,8,1,5,6};

    for(auto i : vec) {

            cout<<i<<" ";
    }
 
    cout<<"\n";

    std::replace( vec.begin(), vec.end(), 1, 550);

    for(auto i : vec) {

        cout<<i<<" ";
    }

    cout<<"\n";
}

// Checks if all of elements match the predicate

void all_of_test() {

    vector <int> vec {1,2,3,4,11,99,4,6,77,5,6,7};

        if( std::all_of (vec.begin(),vec.end(),[](int x) { return x>10; } ) )

            cout<<"All of the elements are > 10 "<<endl;
        else
            cout<<"Not all the elements are > 10 "<<endl;

        cout<<"\n=============================="<<endl;

   
        if( std::all_of (vec.begin(),vec.end(),[](int x) { return x<999; } ) )

            cout<<"All of the elements are < 999 "<<endl;
        else
            cout<<"Not all the elements are < 999 "<<endl;


}

// Transforms element in a container - string in this example 

void string_transform_test () {

        cout<<"\n=============================="<<endl;

    string s1 {"This is a test."};

    cout<<"Before transformation : "<<s1<<endl;

    std::transform( s1.begin(),s1.end(), s1.begin(), ::toupper);

        cout<<"After transformation : "<<s1<<endl;  

// (without header) ::anything means look in global scope 

}

    int main() {

        // find_test();
        // count_test();
        // count_if_test();
        // replace_test();
        // all_of_test();
        // string_transform_test();


    }