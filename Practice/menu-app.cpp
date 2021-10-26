#include <iostream>
#include <vector>
using namespace std;

int main(){

    char choice;
    char ch;
    cout<<"Welcome to the choice-based op.\n These are the task that you can perform "<<endl;

    do {

      vector <int> v1 = {10,20,30,40,5,70,77,99,450};

      /* cout<<"This is your integer list that you can perform task on : "<<endl;

      for(auto list : arr) 
        cout<<list<<" "<<endl; */
        
        system("cls");

     cout<<"Enter your choice from the table below :  "<<endl;
    cout<<"\tChoice - Action"<<endl                   
        <<"\t P     - Print Numbers"<<endl    
        <<"\t A     - Add Number to the list"<<endl    
        <<"\t M     - Display Mean of Numbers"<<endl
        <<"\t S     - Display the Smallest Number"<<endl
        <<"\t L     - Display the Largest Number"<<endl
        <<"\t Q     - Quit"<<endl;

    cout<< "Your choice ? ";    
    cin>>choice;

        switch (choice) {
       
        case 'P' :
        case 'p' :
        {    
            cout<<"This is your list : "<<endl;
            cout<<"[ ";
             for(auto list : v1) 
            cout<<list<<" ";
            cout<<"]"<<endl;
            break; 
        }
        case 'A' :
        case 'a' :
        {
            int add;
            cout<<"Enter the number you wanna add to the list : ";
            cin>>add;

            v1.push_back(add);

            cout<<"Number added.\nThis is your updated list : \n";
            
            for(auto list : v1)
                cout<<list<<" ";

         break;   
        }
        case 'M' :
        case 'm' :
        {
                double mean {0.00};
            int count=0;
            cout<<"This is the mean of entire list : ";

            for(auto list : v1) {       // range-for loop for easy traversing
                
                mean+=list;
                count++;
            }

            cout<<(mean = mean/count)<<endl;
            break;
        }
        case 'S' :
        case 's' :
        {
            cout<<"The smallest number in the list is : ";

            int sm = v1[0]; // Another way of accessing vector values.

            for(int i=0; i<v1.size(); i++) {    // can also traverse vector with normal for loop

                    if( v1.at(i) < sm )
                        sm = v1.at(i);
            }
                cout<<sm<<endl;
                break;
        }
        case 'L' :
        case 'l' :
        {
            cout<<"The largest number in the list is : ";

            int lm = v1[0];

            for(int i=0; i<v1.size(); i++) {

                    if( v1.at(i) > lm )
                        lm = v1.at(i);
            }
                cout<<lm<<endl;
                break;
        }
            case 'Q' :
            case 'q' :
                    exit(0);
                
        
            default : 
               cout<<"Invalid choice, Please go through menu again."<<endl;
        
    }
    
    cout<<"Do you want to play again? (Y/N)"<<endl;
    cin>>ch;

    }while(ch=='y' || ch=='Y');

    return 0;
}