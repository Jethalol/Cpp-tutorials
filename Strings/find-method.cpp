#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1{"This is a test string."};    

    // find returns positon of the string.

    // object.find(search_string);  // returns starting index of finding string
    
    cout<<s1.find("This")<<endl;  // 0 (found at 0 index).
    
    cout<<s1.find("is")<<endl;    // 2 (since this also have 'is' and find returns the first result pos it encounters.)
    
    cout<<s1.find("test")<<endl;  // 10

    cout<<s1.find('e')<<endl; // 11

    cout<<s1.find("is",4)<<endl; // 5 (since we gave beginning index as 4 so it'll start searching for is from there,
    // that's why this's is won't create prob this time.);

    cout<<s1.find("XX")<<endl; // string::npos (Might show random or negative value on cout, usually checked in if
    // statement)

// String returns string::npos (viz no position info available) that is string not found. 
// we can check this in if conditon. for e.g

    if(s1.find("ddm") == string::npos) 
        cout<<"String not found"<<endl;
    else
        cout<<"String found"<<endl; 

// or generally programmer check it as -

    if(s1.find("dng") != string::npos)
        cout<<"String found"<<endl;
    else 
        cout<<"String not found"<<endl;

    return 0;
}