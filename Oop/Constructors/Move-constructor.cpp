#include <bits/stdc++.h>
using namespace std;

class Move {

  private :

    int *data;

    public :

  /* Setter */

      void set_data (int d) {

        *data = d;
      }

//  Getter Method

      int get_data() { return (*data) ; }


// Normal Constructor Declaration

    Move(int d) { 

    data = new int;   // int *data is attribute.

    *data = d;

    cout<<"In normal constructor"<<endl;
}


/* r-value constructor or Move semanctics, it is used to move temproray objects which
save constructor call overhead for temp object by multifold */

/* r-values are temproray object or literals which are non addressable like 100,200, c = a+b (which is temp because a+b's
result will store in c) */

Move (Move&& source_obj) : data {source_obj.data} {

    source_obj.data = nullptr;

    cout<<"Move constructor moving resources "<<*data<<endl;
}

// Destructor Declaration

   ~Move() {

      if(data!=nullptr) 
       cout<<"Destructor freeing data for "<<*data<<endl;    
      else 
        cout<<"Destructor freeing data for nullptr"<<endl;
      
    delete data;  // since memory is DMA so delete will be used as destructor.

}


};

void display_Move(Move s) {

  cout<<"In normal function"<<endl;
  cout<<s.get_data()<<endl;

}

int main() {

    vector<Move> vec;

    vec.push_back(Move{10});

  return 0;
}
