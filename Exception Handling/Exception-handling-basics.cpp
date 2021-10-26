/* throw − A program throws an exception when a problem shows up. This is done using a throw keyword.

catch − A program catches an exception with an exception handler at the place in a program where you want to handle the
 problem. The catch keyword indicates the catching of an exception.

try − A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or
 more catch blocks.
*/

#include <iostream>

int calculate_avg (int sum, int total) {

    if(total==0)
        throw 0;    /* throwing an integer (0) as exception, we can throw anything like object and stuff. if the throw 
/*                        runs then anything below throw (which is in the same scope as throw) will get skipped */
    
    std::cout<<"if throw runs then anything below throw won't run and function terminates."<<std::endl;
    
    return (sum/total);

}

int main() {

    int sum = 13;
    int total = 0;
    int result;

    std::cout<<"Enter total : ";
    std::cin>>total;
   
   try {    /* try block means this block or any func it calls might have potential exception. */
        
    result = calculate_avg(sum,total);

    std::cout<<result<<std::endl;

 std::cout<<"If the code in the try block throws an exception then the rest of the block is not executed."<<std::endl;
   
    }

     catch(int &ex) {   /* this will catch the throwed exception, since we threw 0 which is an int thats why argument is
     /*                 an int and by reference is the best practice, now we can do any change we want in catch's body */

        std::cerr<<"Erro bruh!"<<std::endl;
    }

/* We can't have catch or finally clause without a try statement. We can have multiple catch blocks 
with a single try statement. try-catch blocks can be nested similar to if-else statements.  */

    std::cout<<"Bye"<<std::endl;
    return 0;
}

/* Standard output stream (cout): cout is the instance of the ostream class. cout is used to produce output on the
 standard output device which is usually the display screen. The data needed to be displayed on the screen is inserted
  in the standard output stream (cout) using the insertion operator (<<).

Un-buffered standard error stream (cerr): cerr is the standard error stream which is used to output the errors. This is
 also an instance of the ostream class. As cerr is un-buffered so it is used when we need to display the error message
  immediately. It does not have any buffer to store the error message and display later.

Buffered standard error stream (clog): This is also an instance of ostream class and used to display errors but unlike
 cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled.
 
 */