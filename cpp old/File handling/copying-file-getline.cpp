#include <bits/stdc++.h>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    
    /* Copying from one file to another one line at a time - */

    std::ifstream in_file ("haha.txt");

    std::ofstream out_file ("copyhaha.txt");

        if(!in_file) {

            std::cerr<<"Some unexpected error encountered!"<<endl;

            return (1);
        }

        if(!out_file) {

            
            std::cerr<<"Some unexpected error encountered!"<<endl;

            return (1);
        }

        /* Copying file one line at a time - */

            std::string temp;

            while( getline(in_file,temp) ) {   // reads line from in_file2 to temp

                out_file<<temp;    // writes temp to out_file2
            }

            /* now you can open copyhaha.txt and see that haha.txt all entry are copied there. */

    
   
     return 0;
}