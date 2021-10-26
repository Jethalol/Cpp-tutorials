#include <iostream>

void fun_a();
void fun_b();
void fun_c();

void fun_a() {

    std::cout<<"Starting function a"<<std::endl;

        fun_b();    // Calls fun_b that is now func_b() also be looked in try {....}
    
    std::cout<<"Ending function a"<<std::endl;
}
 
void fun_b() {

        std::cout<<"Starting function b"<<std::endl;

          fun_c();    // Calls fun_b that is now func_c() also be looked in try {....}

        std::cout<<"Ending function b"<<std::endl;  /* this statement won't run since throw runs
    /*                                  in fun_c and it looked for catch in func_b() but b doesn't have
    any catch/exception handler so it gets popped out of stack too and search for handler begin in 
    next function that is func_a and so forth. */

}

void fun_c() {

        std::cout<<"Starting function c"<<std::endl;

            throw 0;    /* since throw will run then this func will terminate and control return to
/*                         calling function */

        std::cout<<"Ending function c"<<std::endl;
}

/* In the above program, when fun_c() throws exception, its entry is removed from the function call 
stack (because it fun_c() doesn’t contain exception handler for the thrown exception), then next 
entry in call stack is looked for exception handler. The next entry is func_b(). Since func_b() 
also doesn’t have handler, its entry is also removed from function call stack. The next entry in 
function call stack is fun_a(). Since func_a() also doesn't contain catch handler so func_a also 
terminates mid way and it goes to main() and main() contains exception handler, the catch block 
inside main() is executed, and finally the code after catch block is executed. Note that the lines 
after func call inside fun_b() and fun_a() are not executed at all because they also gets terminated 
due to absence of catch handler. */

int main() {

    std::cout<<"Starting main function"<<std::endl;

    try{    /* this will look for potential exception in func_a and also any function that function a calls */

        fun_a();
    }

    catch (int &ex) {

        std::cerr<<"Caught error in main"<<std::endl;
    
    }

}