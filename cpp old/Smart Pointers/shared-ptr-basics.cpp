/* Share pointer - Provides a shared ownership of heap objects

shared_ptr<T>

Points to an object of type T on the heap.
it is not unique - there can be many shared ptr pointing to the same object.
Establishesh shared ownership relation
CAN be assigned and Copy
CAN be moved

They manage a count for reference to a memory. (eg if two pointer are pointing to
the same memory then reference count is 2)

Managed object on the heap is only destroyed, when the Reference count is 0.

That is - suppose we have ptr1 and ptr2 referencing to x memory, and ptr1 goes out of scope or we reset it then that 
doesn't mean that ptr2 will be destroyed, ptr2 will keep pointing to the memory and the heap object will only be 
destroyed when refernce count become 0 (i.e. ptr2 also destroyed). */ 

/* use_count - Returns the number of shared_ptr objects managaing the heap object */

#include <iostream>
#include <memory> // for smart pointers

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

void fun(std::shared_ptr<Test> p) {

    std::cout<<"Inside fun function, the use count will be increased here "
            <<"Since we passed ptr to p by value that is a copy."<<std::endl;

/* This is basic slicing for better readability (Lining up of indirectional operator) */

    std::cout<<"Use count for p : "<<p.use_count()<<std::endl;
    

} // Use count will again decrease since p goes out of scope.


int main() {
    /* Making this local scope just to see shared object life and destruct just fyi */

 {  
    std::cout<<"\n==============================================================================\n"<<std::endl;
    std::shared_ptr<Test> t1 (new Test {400});

    std::cout<<"Use count for t1 : "<<t1.use_count()<<std::endl;   
// since only t1 is pointing to heap object so use count = 1

// Best practice - (more efficient and clean)

    std::shared_ptr<Test> t2 = std::make_shared<Test> (1000);
    std::cout<<"Use count for t2 : "<<t2.use_count()<<std::endl; 

    std::cout<<"Copy Initalize t2 in t3 that is shared ownership of memory."<<std::endl;
    std::shared_ptr<Test> t3 {t2}; // shared co-ownership

    std::cout<<"Use count for t2 : "<<t2.use_count()<<std::endl;  
    std::cout<<"Use count for t3 : "<<t3.use_count()<<std::endl;  

/* Obviously both use count are same because the heap object they are pointing or own has two reference (t2 & t3 themselves) */

    t2.reset();

/* t2.reset() decreases use count and sets t2 to point nowhere (null) */

    std::cout<<"Use count for t2 after reset : "<<t2.use_count()<<std::endl; // Use count : 0 since nullptr
    std::cout<<"Use count for t3 after t2 reset : "<<t3.use_count()<<std::endl;  
/* Use count : 1 since the other owner got reset so now  t3 is the only shared pointer that owns the memory in the heap */

 }

std::cout<<"\n==============================================================\n"<<std::endl;

    std::shared_ptr<Test> ptr = std::make_shared<Test> (100);
    std::cout<<"Use count for ptr : "<<ptr.use_count()<<std::endl;


    fun(ptr);  // Pass by value that is a copy will be made
    std::cout<<"Use count for ptr(again decreased since p goes out of scope and use count decreases) : "
             <<ptr.use_count()<<std::endl; 


    std::shared_ptr<Test> ptr2;

    ptr2 = ptr; // Assigning ptr in ptr2, increases reference to heap object

    std::cout<<"Use count for ptr : "<<ptr.use_count()<<std::endl;

        return 0;


}