#include <iostream>
#include <string>

class DividebyZeroException() {

   DividebyZeroException () = default;  // default constructor

   /* Or DividebyZeroException()  { } // default consturctor. Both are same */ 

/* Even if we left the body of class empty, then compiler would have generated default
 constructor for us but we did explicit default just for knowledge. */

};

/* 
Explicitly defaulted function declaration is a new form of function declaration that is introduced into the C++11 standard which allows you to append the ‘=default;’ specifier to
the end of a function declaration to declare that function as an explicitly defaulted
function. This makes the compiler generate the default implementations for explicitly
defaulted functions, which are more efficient than manually programmed function
implementations. */

class NegativeValueException() {

        // no args constructor provided by default
};

double calculate_mpg(int miles, int gallons) {  /* Handlign multiple exception */

    if(gallons == 0)
        throw DividebyZeroException();  //DividebyZeroException() is an object (Default constructor)

    if(miles<0 || gallons<0) 
        throw NegativeValueException(); // constructor

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

            catch(const DividebyZeroException& ex) {

                std::cerr<<"Sorry! You can't divide by Zero."<<std::endl;
            }

            catch(const NegativeValueException& ex2) {

                std::cerr<<"Sorry! One parameter is negative."<<std::endl;
            }
           return 0;

    
}