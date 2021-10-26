#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {

    string name = "Atik";

    
    cout<<"Using setw() : \n"<<endl;

    cout<<name<<endl;   /* see default alignment is left that is printing start from left (i.e. left justified by default) */


    // using std::setw() -

    cout<<setw(6)<<name<<endl;  /* setw() is right justified by default. Also, only works for next data item and doesn't persist */

    cout<<name<<endl; // see now width is default
    
    /* you see now total width taken by Atik is 6 that is -

        1 2 3 4 5 6 
            A t i k

    that is setw() leaves space in left side and starts from as right as possible, 
    Also, Rightmost of Atik will end at 6.

But what if we had something like -

         name = "Atik ji Mansuri";

        cout<<setw(6)<<name; 

        output - Atik ji Mansuri (Don't worry your string won't truncate since the work of setw()
        is only to deal with width )

    */    

   /* setfill('char') can only be used with setw() and setfill() persists */

    cout<<"==========================================================="<<endl;

    cout<<"\nUsing setfill() : \n"<<endl;

    cout<<std::setw(30)<<std::setfill('-')<<name<<endl;

    cout<<std::setw(50)<<"Mansuri ji"<<endl; /* you see here we didn't use setfill but still got 50 '-' this is because setfill persists. so its a good practice to set back setfill to default i.e. setfill(' ') after our use is over */

        cout<<std::setfill(' ')<<endl; // good practice to set if back to space after our work is done to save us from future errors 


    //    cout<<setw(50)<<setfill('*'); this won't show any output  
        
/*  Why this didn't show any output? Recall - setw() works on immediate next entry but here we didn't provide any, so we have to provide something for it to run on even if it is just a blank space. */

        cout<<setw(50)<<setfill('=')<<""<<endl; // see how convinient it made our ===== work.

        cout<<setfill(' ');

    cout<<"Using std:: left and right alignment : "<<endl;

/* this are also only useful when used with setw()
  
  Recall - Bydefault alignment is - left justifiable
           setw alignment is - Right justifiable 
*/

    cout<<setw(50)<<std::right<<"yo yo"<<endl;  // left & right work for immediate next entry only, doesn't persist

    cout<<setw(50)<<std::left<<"honey singh"<<endl; // see how even after using setw() we could left justify the value  

        return 0;
}

 
/* setw - only apply to next entry
    left - only apply to next entry
    right  - only apply to next entry
    fill -  persists until set back to normal
*/
