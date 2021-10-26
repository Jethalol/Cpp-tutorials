#include <iostream>
using namespace std;

int main() {

for (auto &x : vec)
{
  // x is a reference to an item of vec
  // We can change vec's items by changing x 
}
or

for (auto x : vec)
{
  // Value of x is copied from an item of vec
  // We can not change vec's items by changing x
}
	
 // Well.

 // When we don't need changing vec items, IMO, Examples suggest to use second version (by value). 
 // Why they don't suggest something which const references (At least I have not found any direct suggestion):

for (auto const &x : vec) // <-- see const keyword
{
  // x is a reference to an const item of vec
  // We can not change vec's items by changing x 
}

	return 0;
}

/* 

If you don't want to change the items as well as want to avoid making copies, then auto const & is the correct choice:

for (auto const &x : vec)
Whoever suggests you to use auto & is wrong. Ignore them.

Here is recap:

Choose auto x when you want to work with copies.
Choose auto &x when you want to work with original items and may modify them.
Choose auto const &x when you want to work with original items and will not modify them.

*/