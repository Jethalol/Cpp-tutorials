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

    for(auto vec : vector_2D) {

        for(auto n : vec) {

            cout<<n<<" ";
        }
            cout<<endl;
    }

    vector <int> v1 = {1,4,7,8};

    for(auto vec : v1)
        cout<<vec<<" ";


        return 0;

  }





