#include <iostream>
#include <string>

double calculate_mpg(int miles, int gallons) {  /* Handlign multiple exception */

    if(gallons == 0)
        throw 0;

    if(miles<0 || gallons<0) 
        throw std::string{"Negative value entered."};

        return (miles/gallons); 

}

    int main() {

        int miles{};
        int gallons{};

        int miles_per_gallon {};

        std::cout<<"Enter the miles"<<std::endl;
        std::cin>>miles;

        std::cout<<"Enter the gallons"<<std::endl;
        std::cin>>gallons;

        try {

            miles_per_gallon = calculate_mpg(miles, gallons);

            std::cout<<"Result : "<<miles_per_gallon<<std::endl;

        }


       /*  catch(int &ex) {    // will invoke if int exception is thrown

            std::cerr<<"Tried to divide by Zero."<<std::endl;
        } 
        
        Commented it out to demonstrate catch all block! */

        catch (std::string &ex2) {  /* will invoke if std::string exception is thrown */

            std::cerr<<ex2<<std::endl;
        }
    

        catch(...) {    /* this is catch all block, this block runs if there is no previous block to handle an exception,
/*                          this block doesn't have referable argument but only three dots ... */                        

            std::cerr<<"Catch all block"<<std::endl;

        }
            return 0;

/* There is a special catch block called ‘catch all’ catch(…) that can be used to catch all types of exceptions. For
 example, in the following program, an int is thrown as an exception, but there is no catch block for int, so catch(…)
  block will be executed.
*/ 
    
}