/* this pointer - this is a reserved keyword, It's a pointer to the object.
it can be only used in class scope. All member acces is done via this pointer (behind the scenes too by compiler)
We can also use this pointer to access data member and methods.
We can also use this pointer to determine if two objects are same. */

#include <bits/stdc++.h>
using namespace std;

class Anime {

private :

    int episode;
    int ratings;

public :

    void set_ratings(double rat) {

      ratings = rat;  // this-> ratings is implied behind the scenes.

    }

/* Recall, i told you how we can't keep parameter name and attribute names same in
assignment style initialization, but with the help of this pointer we can solve that problem,
tho best practice is to use slight different name */

void set_episode(int episode) {

 // episode = episode will either generate error or unpredictable results, because compiler 
 // does not know which this is for what.

 // but with the help of this pointer we can solve the problem -

/* here this-> episode will refer to class attribute while  while normal episode will refer to local parameter, 
since we give precedence to local variable in C++. */

  this->episode = episode;

  // or *(this).episode = episode; Both are same.


}

};
  
  
   int main() {
     
     Anime a1;

     a1.set_episode = 876;

     cout<<a1.episode<<endl;


     return 0;

   }

