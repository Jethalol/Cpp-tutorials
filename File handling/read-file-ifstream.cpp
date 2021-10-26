#include <iostream>
#include <string>

#include <fstream> // for file stream objects 

int main() {

    std::ifstream in_file;  // ifstream = input file stream (used for )

    in_file.open("Basics.txt"); // open method opens the file if its already available or create one if it is not available (tho it won't create a file for ifstream object (since it is a read only object. so we have to work with pre-created files.) 

    /* in_file.open("file name/path", opening mode) with ifstream the opening mode is by-default
    on read - that is - 
/*                        in_file.open("file-name",std::ios::in); */

/* An ifstream by default will not open a file that doesn't exist. If you want to create the file if it doesn't exist you'll need to use the correct open mode (app) or just create it with ofstream or fstream object, remeber in fstream object also, don't open file just with reading mode otherwise that will give error too. */

/*  Different streams and their default open modes -

    ifstream	ios::in
    ofstream	ios::out
    fstream	ios::in | ios::out

their is also append and truncate like opening modes, we will discuss them later 

*/

    if(!in_file) {   // Returns true if file exists that's why used '!'

        std::cerr<<"File failed to open"<<std::endl;

        return (1); // program terminates.

    }

    /* if( !in_file.is_open() ) this also check and returns true if file is open, both previous one and this are same but the previous one is short so use that */


    /* recall - cin>>line; was used to read from keyboard to our prog, but now we are working with files so we will read from file with file objects*/

    std::string line;

    in_file>>line; /* Reads from the file into line (tho terminates on default delimiters like \n, \t or ' ') */ 

    std::cout<<line<<std::endl; /* see how it truncates after hello since it encountered space */

    int num;
    double total;

    in_file>>line>>num>>total;  /* reading should be done in same data-type order as in text file, otherwise it may fetch a string data in a int data-type which can be a fatal mistake*/

    std::cout<<"\n"<<line<<"\n"<<num<<"\n"<<total<<std::endl;

    /* the reason why line is printing world now is because we read hello first and that delmited because of encountering space so now our iteration will start after that space, that is why World is printed in second read.*/

    in_file.close();    /* Don't forget to close file after our work is done */
   
   return 0;
}