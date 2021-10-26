/* insertion operator - << - cout is object of ostream class (output stream)
   extraction operator-  >> - cin is object of istream class (input stream)

   Both are in header file <iostream> and std namespace */
#include <bits/stdc++.h>
using namespace std;

class Player {

    private :

        int x;
        int y;
    
    public :

        Player(int x=0, int y=0) : x{x}, y{y} {


        }

        friend ostream& operator<<(ostream &output, Player &source);

        friend istream& operator>>(istream &input, Player &source);



};

// Stream insertion operator overloading -

    ostream& operator<<(ostream &output, Player &source) {

        output<<source.x<<endl;

        return output;
  }

// Stream extraction operator overloading -

    istream& operator>>(istream &input, Player &source) {

        input>>source.x;

        return input;

    }

int main() {


    Player t;

    cin>>t;     // operator.>>(cin,t)   

    cout<<t;    // operator.<<(cout,t)

    return 0;

 /*since they are not member function so we have to pass two args (i.e. Caller objs and rhs) */

}

/* Why these operators must be overloaded as global? 

    These operators must be overloaded as a global function. And if we want to allow them to access private data members
     of the class, we must make them friend. 

      And Also we are returnin reference to ostream and istream so we'll be able to use chain insertion and extraction
      like we do with primitive data types : e.g. cin>>x>>y; 
*/