#include <iostream>
using namespace std;

int main(){

    int estimate_days = 30;
    
    int no_of_small_rooms = 0;
    int no_of_large_rooms = 0;

    double price_small_rooms = 25.0;
    double price_large_rooms = 35.0;
    double sales_tax = 6.0;

    cout<<"\n\tWelcome to Mansuri Motels."<<endl;
    
    cout<<"\nPrice per Small rooms = $"<<price_small_rooms<<" and per Large rooms = $"<<price_large_rooms<<endl;
    cout<<"Sales tax will be : "<<sales_tax<<"%"<<endl;

    cout<<"How many small rooms do you want? ";
    cin>>no_of_small_rooms;
    
    cout<<"\nHow many big rooms do you want? ";
    cin>>no_of_large_rooms;

    double cost = (no_of_small_rooms*price_small_rooms) + (no_of_large_rooms*price_large_rooms);
    double tax = cost * 0.06 ;
    double total_cost = cost + tax;

    cout<<"====================================="<<endl;
    cout<<"Total Cost is : $"<<total_cost<<endl;
   cout<<"The estimate is valid for "<<estimate_days<<" days."<<endl;


    return 0;
}