#include <bits/stdc++.h>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    
    /* Copying from one file to another char by char - */

    std::ifstream in_file ("lol2.txt");

    std::ofstream out_file ("copylol2.txt");

        if(!in_file) {

            std::cerr<<"Some unexpected error encountered!"<<endl;

            return (1);
        }

        if(!out_file) {

            
            std::cerr<<"Some unexpected error encountered!"<<endl;

            return (1);
        }

        /* Copying file char by char - */

            char c;

            while( in_file.get(c) ) {   // reads char from file to c, char by char

                out_file.put(c);    // writes from c to out_file
            }

            /* now you can open copyhaha.txt and see that haha.txt all entry are copied there. */

    
   
     return 0;
}