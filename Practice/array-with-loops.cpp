#include <iostream>
using namespace std;

int main(){

    int marks[]={11,22,33,44,55};

    cout<<"Printing marks array using individual cout : "<<endl;
    
    cout<<"Marks is marks[0] = "<<marks[0]<<endl;
    cout<<"Marks is marks[1] = "<<marks[1]<<endl;
    cout<<"Marks is marks[2] = "<<marks[2]<<endl;
    cout<<"Marks is marks[3] = "<<marks[3]<<endl;
    cout<<"Marks is marks[4] = "<<marks[4]<<endl;

    cout<<"Printing marks array using for loop : "<<endl;

    int number_of_elements = sizeof(marks)/sizeof(marks[0]);
    
    for(int i=0;i<number_of_elements;i++) {

        cout<<"Marks is marks["<<i<<"] = "<<marks[i]<<endl;

    }

    cout<<"Printing marks array using while loop : "<<endl;
    
/*    int i = 0; Since previous i was declared inside for loop and due to auto storage class life, its scope/life was only in the 
 block where it was declared. tho if we had declared it in outside of for(that is in main() directly) then we won't 
 have to face any such problem */
   
    int i=0;
    while(i<number_of_elements) {

        cout<<"Marks is marks["<<i<<"] = "<<marks[i];
        i++;
    }
        cout<<"Printing marks array using do-while loop : "<<endl;

        i=0;

        do{

        cout<<"Marks is marks["<<i<<"] = "<<marks[i]<<endl;
        i++;        

        }while(i<number_of_elements);

    return 0;
}