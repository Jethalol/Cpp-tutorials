#include <bits/stdc++.h>
using namespace std;

int* getdata () {

  static int x = 10;
  return (&x);
  
}

  int main() {

      int *y = getdata();

      cout<<*y; 

    return 0;
  }