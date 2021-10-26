#include <bits/stdc++.h>
using namespace std;

int glo = 10;

int fun(void) {

int *th = &glo; /* dont get confused with *, * in initialization means th is a pointer variable, everywhere else it'll mean
*                deferenced value of what its pointing to.  */

  return *th; /* even tho it looks like we are returning a pointer but effectively we are just returning a int (since th
  *            will get derefrenced to an int) */

}
int main() {


 cout<<fun();
  
  return 0;
  
}