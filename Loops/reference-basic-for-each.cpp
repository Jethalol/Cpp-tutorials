#include <bits/stdc++.h>
using namespace std;

int main() {

vector<int> vec {1,2,3,4,5};

auto& n = vec;

for (auto &x : vec)
{
 cout<<x<<endl;
}

for(auto &p : n) {

	cout<<p<<" ";
}	
	return 0;
}