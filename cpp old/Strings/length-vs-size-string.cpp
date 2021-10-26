/* The size() function is consistent with other STL containers (like vector, map, etc.) and length() is consistent with
 most peoples intuitive notion of character strings like a word, sentence or paragraph. We say a paragraph’ss length 
 not its size, so length() is to make things more readable. */

 /* Methods to find length of string

Using string::size: The method string::size returns the length of the string, in terms of bytes.
Using string::length: The method string::length returns the length of the string, in terms of bytes.  Both string::size and string::length are synonyms and return the exact same value. */


// CPP program to illustrate Different methods to find length of a string -

#include <iostream>
#include <string>
using namespace std;
int main()
{
    // String obj
    string str = "Atik Mansuri";
  
    // 1. size of string object using size() method
    cout << str.size() << endl;
  
    // 2. size of string object using length method
    cout << str.length() << endl;
  
    // 3. size of string object Using while loop
    // while 'NOT NULL'
    int i = 0;
    while (str[i])
        i++;
    cout << i << endl;
  
    // 4. size of string object using for loop
    // for(; NOT NULL ;)
    for (i = 0; str[i]; i++)
        ;
    cout << i << endl;
  
    return 0;

}   

/* There is also strlen(string name ) which is generally used with char arrays[] , we can also use that for cpp string
but we already have size and length method so we don't use strlen(). Anyway it can be done as - 

 size using old style - size of string object using strlen function
    cout << strlen(str.c_str()) << endl;

*/