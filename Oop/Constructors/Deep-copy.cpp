#include <bits/stdc++.h>
using namespace std;

class Deep {

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

    Deep(int d) { 

    data = new int;   // int *data is attribute.

    *data = d;

    cout<<"In normal constructor"<<endl;
}

// Copy Constructor Declaration

    Deep (const Deep& source_obj)  { 

      data = new int;    // int *data is attribute.

      *data = *(source_obj.data);      

  cout<<"In copy constructor"<<endl;

}

 /* In deep copy we copy the data pointer is pointing to unlike shallow where 
 address was getting copied, so now both obj and source have their own location and copies of int. 
 In shallow one int was getting pointed by shallow and source object. */

/* We can also deligate this construct to normal one since that is also init memory

  Deep(const Deep& source_obj) : Deep {*(source_obj.data)} {


  }
  
  */
// Destructor Declaration

   ~Deep() {

    delete data;  // since memory is DMA so delete will be used as destructor.

    cout<<"Destructor Called"<<endl;
}


};

void display_Deep(Deep s) {

  cout<<"In normal function"<<endl;
  cout<<s.get_data()<<endl;

}

int main() {

  Deep obj1{100};  // User-defined one arg (DMA) constructor called

  display_Deep(obj1);  /* This will get passed by value that is a copy of obj1 will be passed,
  /                          copy constructor will be called. the parameter s will have values of obj1 */



  Deep obj2{obj1};

  obj2.set_data(1000);


  return 0;
}
