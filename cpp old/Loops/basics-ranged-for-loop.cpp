// C++11 introduced the ranged for loop. This for loop is specifically used with collections such as arrays and vectors. 

// Syntax : 

/* for (rangeDeclaration : rangeExpression) {       e.g. - int arr[5] = {1,2,3,4,5};
*                                                     for(int num : arr) {     };
// code                                                                            

} */

// rangeDeclaration = data-type of the sequence that we will traverse and a variable name of our choice.
// (if we dont want to write entire data type like in vectors it become long then we can just write auto and C++ will automatically 
// choose correct data type)

// rangeExpression (sequence name) = Name of array or vector or string that we will iterate/traverse.

// Basic example -

#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};

    cout<<"Using the for-ranged aka for-each loop."<<endl;

    for(auto n : arr) {     // We can also write for(int n : arr) since arr is of type int but 'auto' will automatically choose int for us.

        cout<<n<<endl;

    }

    

    return 0;
}

/* In this example, we declared and initialized an int array named arr. Here, we used the ranged for loop to print out the elements of arr.

first iteration - n takes the value of the first member of the array, which is 1
second iteration - n takes the value of 2 and is then printed...
and so on. */