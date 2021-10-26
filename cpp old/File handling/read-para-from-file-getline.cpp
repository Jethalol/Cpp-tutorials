#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

int main() {

    std::ifstream in_file("lol2.txt");  // std::ifstream("file",std::ios::in mode by default) both are same

        if( !in_file ) {
         
            std::cerr<<"Error occured"<<std::endl;
                return (1); // terminates the prog.
        }

    std::string s1;

    /* Reading entire line from file - */

        getline(in_file,s1);    

        cout<<s1<<endl;
    
    /* Here we are using - getline(fstream& obj, string& str) */

    /*  Recall -  
        
         getline( istream& is, string& str );  
   
        Where,

        is: It is an object of the istream class that defines from where to read the input stream.

        str: It is a string object in which string is stored.

    */

   /* Reading paragraph from file - */
    
        std::string s2;

    while( getline(in_file,s2) ) {

        cout<<s2<<endl; /* start from shakespeare because we already read prior line */
    }

    /* we can also read paragraph like this -

        while( !in_line.eof() ) { // eof - end of file() method returns true at the end of file
//                                    thats why we used ! so our while terminates 

            getline(in_file,s2);

            cout<<s2<<endl;
        }
*/


   in_file.close();

    return 0;
}