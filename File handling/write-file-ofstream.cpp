#include <bits/stdc++.h>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    /* we can also use fstream object -

        fstream out_file;

            out_file.open("file-name",std::ios::out)

    or we can use ofstream object which have output stream by default */

        std::ofstream out_file ("outfile.txt");  /* it creates the file, if file not found. Also, it truncates (removes) the previous data from file by default. Tho, we can stop that using and append it by opening file in append mode if we wish */

        /* same as - ofstream out_file;

                        out_file.open("file-name",std::ios::out);

            more opening modes at end
        */

     

        if(!out_file) { // or if( !out_file.is_open() )

            std::cerr<<"Error bruh!"<<endl;
            return (1);
        }


        int num = 100;
        double total = 456.78;
        std::string name = "atik";

        out_file<<num<<"\n"
                <<total<<"\n"
                <<name<<endl;

        /* Recall cout<<name used to write to the monitor, here we
        are just writing to the file */

/* Reading from file, not neccesary just for fun - */

        std::ifstream in_file("outfile.txt"); // will open outfile for reading.

            char c;
            std::string x;


            while(in_file.get(c)) {

                cout<<c;
            }

/* other ways of doing the same thing 

            while(getline(in_file,x)) {

                cout<<x<<endl;
            }

             while(in_file>>num>>total>>name) {

                cout<<num<<endl<<total<<endl<<name;
            }
 */
   
        std::ofstream out_file2 ("outfile.txt", std::ios::app);

/* opening file in append mode that is doesn't clear previous data. have to name object differently. because obv this open file could be any file, need not to be same file thats why. */

            cout<<"\nEnter something to write in file : "<<endl;

            std::string line;

           getline(cin,line);

           out_file2<<line;

         out_file2<<std::flush; /* Why did we need to flush at all? it is because if we don't flush the stream then
         the ifstream won't be able to properly read the outfile thats why flushing the buffer is good practice.

         if it is so then why didn't we clear buffer in out_file and why only in out_file2?

            Because we used <<name<<'endl'; at the end which flusheh the stream thats why we didn't need to flush the 
            stream there. 

            if we don't flush the stream then our data in file would be written but when reading the data will truncate and
            don't show up properly.
            
             More elaboration at end.... 
        */

/* Reading from file, not neccesary just for fun - */

        std::ifstream in_file2("outfile.txt"); // will open outfile for reading.

       if( !in_file2 ) {

        std::cerr<<"File didn't open. Error encountered."<<endl;
    }

            char ch;

            cout<<endl;

            

            while( in_file2.get(ch) ) {

                cout<<ch;
            }

            

        in_file.close();
        in_file.close();
        out_file.close();
        out_file2.close();

     return 0;
}

/* 

out_file2<<line;

doesn't flush (the use of std::endl in the prior code does), so if there's less than a full block of data read from
std::cin, the data written to out_file2 is likely stuck in your user-mode buffers (and not visible when you open the
file for read independently). Those buffers make I/O efficient by reducing the number of system calls when you're
performing many smallish writes, in exchange for any buffered data not being visible outside of that file handle
until the buffer is flushed (implicitly by filling, or explicitly by manual flushing or closing the file handle).
    
Simply changing that line to:

out_file2 << line << std::flush;

(or just .close()ing out_file2 once you're done with it) will cause it to flush properly and you should see the new data on opening it again for read. 

Or you can put it in local scope for it to be implicitly close by compiler (not good practice tho.)

*/

/* // truncate (discard contents) when opening -

     //  std::ofstream out_file ("file name", std::ios::trunc)

     // append on each write (that is previous content + new content )

     // std::ofstream out_file ("file name", std::ios::app);

     // seek to end of stream when opening -

     // std::ofstream out_file ("file name", std::ios::ate);
  
  */