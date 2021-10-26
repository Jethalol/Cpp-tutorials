#include <bits/stdc++.h>
using namespace std;

class Shallow {

  private :

    int *data;

    public :

/* Setter Method (Just normal functions which are used to set value of private attributes) */

      void set_data (int d) {

        *data = d;
      }

//  Getter Method

      int get_data() { return (*data) ; }


// Normal Constructor Declaration

    Shallow(int d) { 

    data = new int;

    *data = d;

    cout<<"In normal constructor"<<endl;
}

// Copy Constructor Declaration

    Shallow (const Shallow& source_obj) : data {source_obj.data} { // This is a shallow constructor, 
 //this is also what a default c++ generated copy constructor for ptr will look like.

  cout<<"In copy constructor"<<endl;

}

// Destructor Declaration

   ~Shallow() {

    delete data;  // since memory is DMA so delete will be used as destructor.

    cout<<"Destructor Called"<<endl;
}


};

void display_shallow(Shallow s) {

  cout<<"In normal function"<<endl;
  cout<<s.get_data()<<endl;

}

int main() {

  Shallow obj1{100};  // User-defined one arg (DMA) constructor called

  display_shallow(obj1);  /* This will get passed by value that is a copy of obj1 will be passed,
  /                          copy constructor will be called. the parameter s will have values of obj1 */


  /* Either here or at the end of program we will encounter an error, that error will arise because of shallow copy,
  In shallow copy the pointer (address) is copied not what its pointing to. So, when destructor gets called the address
  gets deleted and creating new obj may throw error (or run in some cases) but when we will call destructor on that temp
  address that program have no definiton about then program will crash in IDE (not happening in VS-Code for some reason.) */
  Shallow obj2{obj1};

  obj2.set_data(1000);


  return 0;
}
