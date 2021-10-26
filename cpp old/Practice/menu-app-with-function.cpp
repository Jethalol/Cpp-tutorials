#include <bits/stdc++.h>

using namespace std;

void menu(void);

void display(const auto n);

void add_push(auto& q);

void mean_no(auto mac);

void small_no(const auto sl); 

void large_no(const auto la);

void menu(void) {

	cout<<"\tChoice - Action"<<endl                   
        <<"\t P     - Print Numbers"<<endl    
        <<"\t A     - Add Number to the list"<<endl    
        <<"\t M     - Display Mean of Numbers"<<endl
        <<"\t S     - Display the Smallest Number"<<endl
        <<"\t L     - Display the Largest Number"<<endl
        <<"\t Q     - Quit"<<endl;

}

void display(const auto n) {

	// cout<<"This is your output : "<<endl;

	cout<<"{ ";

	for(auto wtf : n) 
		cout<<wtf<<" ";

	cout<<"}"<<endl;
}

void add_push(auto& q) {

	cout<<"List before adding element : "<<endl;
	display(q);

	int num{};
	cout<<"Enter the number that you want to add in the list : ";
	cin>>num;
	q.push_back(num);

	display(q);
}

void mean_no(auto mac) {

	cout<<"List is : "<<endl;
	display(mac);

	cout<<"Mean of the list is : ";

	double mean{};
	int sum{};
	int count{0};

	for(auto m : mac ) {	// for(int count{0}; auto m : mac) we can only initialize variable inside for each loop 
//							after C++20 update which might not work in many compiler rn, so i avoid it.

		 sum+=m;	 
		count++;
		
	}

	mean = sum / count;
	
	cout<<mean<<endl;

}

void small_no(const auto sl) {

	display(sl);
	
	cout<<"The smallest number in the list is : ";

		int small = sl.at(0);

	for(int i=0; sl[i]; i++) {

		if(sl.at(i)<small)
			small = sl.at(i);
	}
		cout<<small<<endl;
}

void large_no(const auto la) {

	display(la);
	
	cout<<"The largest number in the list is : ";

		int large = la.at(0);

	for(int i=0; i<la.size() ; i++) {

		if(la.at(i)>large)
			large = la.at(i);
	}
		cout<<large<<endl;
}

int main() {

	cout<<"Welcome to function-based Menu driven app : "<<endl;


	vector<int> v1 =  {10,20,30,40,50,7,88,45,12};

	// char choice[] = {'P','A','M','S','L','Q'}; 

	cout<<"\tEnter your choice from the table below : "<<endl;

	menu();

	char ch;
	cout<<"\nYour Choice? ";
	cin>>ch;

	ch = toupper(ch); // toupper(character) function uppercase the input character which will save us from hassle 
	//					of comparing lowercase and uppercase letter seperately. 

	
	if(ch =='P') {	// Now we dont have to check for if(ch == 'm' || ch=='M')  if user have mistakenly entered 
					// lowercase letter. Now even if user enter lowercase letter 
		cout<<"The list is : "<<endl;
		display(v1);
	}
	else if(ch == 'A')  
		add_push(v1);
	
	else if(ch == 'M')
		mean_no(v1);

	else if(ch =='S')
		small_no(v1);

	else if( ch == 'L')
		large_no(v1);

	else if(ch == 'Q')
			exit(0);

	return 0;
}