#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> vector1;
   vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout<<"\nThe size of vector1 is "<<vector1.size()<<endl;
    cout<<"The elements in vector1 are : "<<endl<<vector1.at(0)<<endl<<vector1.at(1)<<endl;

    vector2.push_back(100);
    vector2.push_back(200);

    
    cout<<"\nThe size of vector2 is "<<vector2.size()<<endl;
    cout<<"The elements in vector2 are : "<<endl<<vector2.at(0)<<endl<<vector2.at(1)<<endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

/* Here i have lined up insertion operator which is legal and allowed in c++ to get easy readabillity, just like we used to do line splicing*/
    
    cout <<"\nThe elements of 2D-Vector are - printing with at() method : \n"
         <<vector_2d.at(0).at(0)<<endl<<vector_2d.at(0).at(1)<<endl
         <<vector_2d.at(1).at(0)<<endl<<vector_2d.at(1).at(1)<<endl;    

  /* cout<<"We can also do line splicing in cpp"
        <<"like this, with and without indirection operator both will work in case of string"
        <<"but in case of printing values just like vector example, indirection operator becomes neccesary" */

  vector1.at(0) = 1000; // Assinging new value in vector1 at 0 index.

    cout <<"\nThe elements of 2D-Vector are - printing with subscript[] operator : \n"
         <<vector_2d[0][0]<<endl<<vector_2d[0][1]
         <<endl<<vector_2d[1][0]<<endl<<vector_2d[1][1]<<endl;

    cout<<"Updated elements of vector1 are : "<<endl<<vector1[0]<<endl<<vector1[1]<<endl;
                  

    
    return 0;
}