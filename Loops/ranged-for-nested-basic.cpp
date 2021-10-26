#include <iostream>
using namespace std;
 
int main ()
{
    int arr1[3] = {0,1,2};
    int arr2[5] = {0,1,2,3,4};
    
    for(int i : arr1)
    {
        for(int j : arr2)   // Just like normal for loop, Inner loop will traverse whole from begin to end for a single
    //                      iteration of outer for loop.
        {
            cout << "i = " << i << " and j = " << j << endl;
        }   
    }
     return 0;
}