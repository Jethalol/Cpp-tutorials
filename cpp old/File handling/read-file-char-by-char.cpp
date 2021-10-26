#include <iostream>
#include <string>
#include <fstream> // for file streams

using std::cout;    /* now we won't have to use std:: for cout and cin only */
using std::endl;
using std::cin;     /* Didn't use using namespace std so you would know which file class is 
/*                 subcalss of std or ios etc, as using std would've included all std obj */

int main() {

    std::ifstream in_file ("haha.txt");

    /* here we are using ifstream class constructor to open file*/
    /* it is same as doing -
        std::ifstream in_file;
            infile.open("haha.txt"); 
            you can use whatever you wish 
    */

    if( !in_file ){

        std::cerr<<"File didn't open. Error encountered."<<endl;
    }

/* File content - My name is Atik Mansuri. I am the best coder in the World. (just fyi) */

    /* Reading one character from the file - */        

    char c;

    in_file>>c;

    cout<<c<<endl;  // Output M as expected

    /* we can also do this inside loop to read whole till end of file - 

          while(in_file>>c) {

            cout<<c;    (But it will read without spaces because space is delimiter for cout<<)
          
          }
    */

    /* Reading file character by charater - 

        while (!in_file.eof())  {

    /* eof() methods return true at the end of file (thats why we used !eof() so it becomes false
     at eof and while loop breaks. Tho eof method shouldn't be used while reading char by char,
      we will learn why below)
        
        
        in_file>>c; // But since >> extraction operator delimits at whitespace so all the spaces
         won't print thats why this approach shouldn't be used. Use get(char) method instead to
          read char from files.

        cout<<c;
    }

*/      
    /* Reading file character by charater - */
    
        while( in_file.get(c) ) {   /* the get(c) reads char by char and method will stop when we
         have no more char to read. Better approach than using eof */

            cout<<c;    // starts from y since we iterated M already.

        }

/* Why didn't we use !eof() approach here? 

    while( !in_file.eof() ) {   

       in_file.get(c);  

        cout<<c;
    }

    Here the !eof() method won't work as expected because in the end of file it will consider 
    ' ' as a character first instead of understanding it as end since we are going char by char
    only after that it'll terminate that means that we would've printed the last word in our
     buffer by then. So it is not advisable to read file char by char using eof function */


    in_file.close();
}