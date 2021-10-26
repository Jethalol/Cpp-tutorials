/* Smart pointers - Very efficient
    unique_ptr <data-type>; // template class unique ptr
 Works as a wrapper over raw poitner
 It is unique- that is there can only be one unique_ptr pointing to the object on the heap
 Owns what it points to
 Can not be assigned or copied
 Can be moved
 Automatically destroyed, no need to worry for delete */

#include <iostream>
#include <vector>

#include<memory>

class Test {

private :
    int data;

public :
    Test() : data{0} {
        
        std::cout<<"No-args constructor called for data = "<<data<<std::endl; 
    
    }

    Test(int data) : data{data} {

        std::cout<<"Test constructor called for data = "<<data<<std::endl;

    }

        int get_data() { return data; }

    ~Test() {std::cout<<data<<" : Destructor Called."<<std::endl; }

};

int main() {

/*  Normal object and pointer -    

    Test t1 {100};

    Test *ptr = new Test {200};

    delete ptr; // Mandatory to release memory when working with normal pointer
 */
    
/* Smart Pointer - Unique pointers */

  /*  std::unique_ptr<Test> t1 = new Test (2000); 
  Error - conversion from 'Test*' to non-scalar type 'std::unique_ptr<Test>' requested

    Since unique pointer are template class that is t1 is basically a object (that wraps around pointer) 
    now and wkt that objects are not initialized like this - Account = 12, but this - Account(12). Now you might 
    ask why in vectors then vector<int> v1 = {1,2,3,4} worked? it is because in vector the constructor were not 
    explicit (that is implicit conversion of v1 = to v1{} happened behind the scenes) But if you open unique pointer 
    library you will see that in this constructor are explicit, so we'll have to call them explicitly. 

    Tho there is a better way of intialization which is exception-safe and eficient too (by using make unique function)
     
 */
    std::unique_ptr<Test> t1 {new Test (50000)};    // t1 is object of class template unique_ptr which have explicit constructor

    // Best practice is to use make_unique - 
    std::unique_ptr<Test> t2 {std::make_unique<Test> (455)};

    std::unique_ptr<Test> t3 = std::make_unique<Test> (1200);   /* it is ok since make unique is a function - this function
    returns a unique pointer to the specified type and it allow us to pass initialization to the constructor of managed 
    object (which is t3 here). 

    So basically, make unique is exception safe, efficient as well us let us initialize that's why it is best practice to
    use make unique over new (make unique is basically a wrapper for new). Also we don't have to worry about 
    delete either */                                                       

    t2.reset(); // Reset in unique_ptr destroys the heap object and set the unique_ptr to null.
     
    std::unique_ptr<Test> t4;

    // t3 = t1; can't copy or assign unique ptr

// But we can move them -

    t4 = std::move(t1); // Now t4 owns t1's value and t1 points to nullptr (basically t4 steals t1)

    if(t1) 
        std::cout<<"t1 exist"<<std::endl;
    else 
        std::cout<<"t1 is null"<<std::endl;

    if(!t2) { /* (not t2 means if will be true if t2 condition is false (t2 would be true if t2 exist
/*                so its opposite means that now if will be true if t2 doesn't exist. Really simple thing duh. */
  
    std::cout<<"t2 is null (since reseted)"<<std::endl;

    }
    return 0;
}