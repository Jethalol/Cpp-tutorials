#include <iostream>
using namespace std;

int main() {

    int i=1,n=0;

cout<<"Enter the number whose table you wanna print : ";
cin>>n;


  
  do {

      cout<<n<<" x "<<i<<" = "<<n*i<<endl; 
      i++;

    }while(i<=10);


    return 0;

}