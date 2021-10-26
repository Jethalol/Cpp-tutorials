#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <vector <int>> vector_2D 
    {
        {1,2,3},
        {100,200,300,400},
        {1000,2000,3000,4000,5000}
    };

    int size = vector_2D.size();

     for(int i =0; i<size; i++) {

        for(int j = 0; j<size; j++) {

            cout<<vector_2D.at(i).at(j)<<" ";

        }
            cout<<endl;

    }

        return 0;

  }





