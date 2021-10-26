/* 

There are two different ways of declaring and initializing the C++ getline: three parameters and two parameters.
The syntax for declaring the function with three parameters is:

istream& getline (input stream, string name,delimiting character);

In the above syntax, istream& getline is to define the function, and the three parameters are:

Input Stream: cin generally, to read the input stream.
String name: This is the object where the string is stored after reading.
char delimiting: This is the delimiting character that marks the end of taking inputs. */

/*

The second method of declaring the C++ getline() function with two parameters is:

istream& getline( input stream, string name );

In the above syntax, istream& getline is to define the function, and the two parameters are:

Input Stream: cin generally, to read the input stream.
String name: This is the object where the string is stored after reading.
This getline end when encouters '\n'

Return Value
Regardless of the syntax, the getline() function returns the input stream that you pass as an argument to the function.


*/

/* Getline for char Arrays : 

You can also use C++ getline() function for a character array. However, the syntax differs from what you have seen for the strings. The syntax to use getline character array is:

istream&  cin.getline(char* , int size);

In the above syntax:

char: Array name or This is the character pointer that points to the array.
int size: This defines the maximum size of the array. Thus, it acts as the delimiter, since exceeding 
 the limit will stop the reading.

*/