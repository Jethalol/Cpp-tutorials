#include <iostream>
#include <vector>

void display (const std::vector<int> &vec) {    // display vector using range based for loop

    std::cout<<"[ ";
    for (auto const &v1 : vec) {

        std::cout<<v1<<std::endl;
    }
    std::cout<<" ]"<<std::endl;

    
}

void test1 () {

    std::cout<<"============================================="<<std::endl;

    std::vector<int> nums1 {1,2,3,4,5};

/* Using iterators - beginning iterator - iterator points to container element */

    std::vector<int> :: iterator it = nums1.begin(); // points to 1 
    std::cout<<*it<<std::endl;

/*  or auto it = nums1.begin();     //.begin will indicate to auto that we want to use iterator for this. */


    /* Remember it is not a pointer, its an object but the syntax and use is 
    very much like pointer and that's by default so. */

    it++; // points to 2
    std::cout<<*it<<std::endl;

    it+=2;  // points to 4
    std::cout<<*it<<std::endl;

    it-=2;   // points to 2
    std::cout<<*it<<std::endl;
    
    it = nums1.end() - 1;   // points to 5
    std::cout<<*it<<std::endl;

    /* nums1.end() points to one past the end of vector that is, if there are 5 
    elements in vector then it will point to 6th thats why nums1.end()-1 is used. */

}  

void test2 () {

  std::cout<<"============================================="<<std::endl;

    std::vector<int> nums1 {1,2,3,4,5};

/* Using iterators - beginning iterator - */

    auto it = nums1.begin(); // points to 1 
  
  // iterates through vector element  
    while ( it!=nums1.end() )
    {
        std::cout<<*it<<std::endl;

         it++;
    }
    
 // Changes vector elements

    std::cout<<"\nChanging vec element - Another way of 'iterating' thorugh vector\n"
    <<"this is what happens in range based for loop behind the scenes, used just to explain."<<std::endl;
    
    for(auto v1 = nums1.begin(); v1!=nums1.end(); v1++ ) {  // auto = vector <int> :: iterator v1

            *v1 = 0;    
            std::cout<<*v1<<std::endl;
    }
}

void test3 () {

    // using constant iterator 

    std::cout<<"\n========================================="<<std::endl;

    std::vector <int> nums1 {1,2,3,4,5};

    std::vector <int> :: const_iterator it1 = nums1.begin();    // can also use nums1.cbegin() c for constant

    /* to use with auto - we will have to use .cbegin() mandatory so auto would not mistake it for normal iterator

    eg- auto it1 = nums1.cbegin();
    
    */

    while( it1 != nums1.end() ) {

       std::cout<<*it1<<std::endl; 

        it1++;
    }


// compiler error when we try to change element, since constant iterator
    while( it1 != nums1.end() ) {

        // *it1 = 0; 

        it1++;
    }


}

void test4() {

    // std::vector <int> vec {1,2,3,4,5,6,7};

    // auto it = vec.rbegin(); // reverse iterator over vector of ints

    // while(it != vec.rend() ) {

    //     std::cout<<*it<<std::endl;
    //     it++;
    // }


    std::vector <int> vec {1,2,3,4,5,6,7};

    std::vector <int> :: reverse_iterator it = vec.rbegin();    // rbegin() mandatory, r for reverse

    // auto it = vec.rbegin();

    while(it != vec.rend() ) {  // rend() is reverse end, basically one before beginning

        std::cout<<*it<<std::endl;
        it++;                       // it++ with rbegin just works like i-- (that is right to left iteration) 
    }
    


}

void test5() {

    std::vector <int> v1 {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    auto start = v1.begin()+3;
    auto finish = v1.end()-2;

    while(start != finish) {

        std::cout<<*start<<std::endl;
        start++;
    }

}

void test6() {

// These are not iterator method or have anything to do with STL but for normal for loop we can use them as well 

    std::vector <int> v1 {1,2,3,4,5};

    
    for(auto i=0; i<v1.size(); i++) {

        std::cout<<v1[i]<<std::endl;

        std::cout<<v1.at(i)<<std::endl;
    }

}

int main() {

    // test1();
 
    test2();
 
    // test3();
 
    // test4();
 
    // test5();
 
    // test6();
    return 0;

}