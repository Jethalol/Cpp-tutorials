#include <iostream>
using namespace std;

int main() {

   const int dollar_value {100}, quarter_value {25}, dime_value {10}, nickel_value {5}, penny_value {1};
   int cents {0}, balance {0};
   
   cout<<"Enter an amount in cents : "<<endl;
   cin>>cents;

   int dollar{}, quater{}, dime{}, nickel{}, penny{};
   
   dollar = cents/dollar_value;
   balance = cents%dollar_value;

   quater = balance/quarter_value;
   balance = balance%quarter_value;

   dime = balance/dime_value;
   balance = balance%dime_value;

   nickel = balance/nickel_value;
   balance = balance%nickel_value;

   penny = balance/penny_value;
   balance = balance%penny_value;
   
   /*Line splicing/breakup just for readability */
   cout<<"For "<<cents<<" you can get change : "<<endl
   <<"Dollars = "<<dollar<<endl
   <<"Quaters = "<<quater<<endl
   <<"Dime = "<<dime<<endl
   <<"Nickel = "<<nickel<<endl
   <<"Penny = "<<penny<<endl;
   
      return 0;
}