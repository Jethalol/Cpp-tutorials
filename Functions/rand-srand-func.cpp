/* With the help of rand () a number in range can be generated as num = (rand() % (upper – lower + 1)) + lower */
#include <iostream>

#include <cstdlib>	// for rand() function
#include <ctime>	// for seeding system time

using namespace std;

int main() {


	int num{};

	cout<<"RAND_MAX on my system is : "<<RAND_MAX<<endl;	

	srand(time(nullptr));	// to seed rand() with different value each time.

	
		num = rand() % 5;	// Will generate random no from 0 till n-1 i.e 4
		cout<<num<<endl;		

	// for generating random no in b/w a range - 

	//	(rand() % (upper – lower + 1)) + lower

	int min = 10;
	int max = 30;

	num = rand() % (max-min+1) + min; 
		cout<<num<<endl;

	return 0;
}