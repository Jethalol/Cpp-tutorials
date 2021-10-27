#include <vector>
#include <iostream>
using namespace std;

template <typename T>
    class Item {

private :
    string name;
    T value;

public :

    Item(string name_val, T value_val) : name {name_val}, value {value_val} {


    }

    string get_name() const {return name; }

    T get_value() const {return value; }

};

int main() {

    cout<<"===========================================\n";

    Item <int> t1 {"frank",100}; 
    cout<<t1.get_name()<<" "<<t1.get_value()<<endl;   

    Item <string> t2 {"Curly","Knows"};
    cout<<t2.get_name()<<" "<<t2.get_value()<<endl;

/* In class template it is neccesary to give template argument <int> or any user defined type. 
/* Also, In class item since two types string and T is there and we only used one template argument
/* so obviously the first one will always be string in all declaration and value will be template
/* argument. */   

    Item < Item<double> > t3 {"Parent name", {"Inside name and val",40.00} };
    cout<<t3.get_name()<<endl
        <<t3.get_value().get_name()<<" "    // since value has T as item 
        <<t3.get_value().get_value()<<endl;

/*  Did it on purpose for understanding - 

Here our item has another item, let's parent item = item1 and inside item = item2

wkt, item-1 has name and value = item-1's name by default and value is what we have as template
in which we mention item-2. So now we have item-1 with a string name and item-1's T value is another
item-2. Ok so now this item-2 will have its own name and value, the name will be default and we have 
to give argument for T value type which we gave as double. i hope its clear */  
    
    cout<<"===========================================\n";

        vector <Item <double> > vec {}; // vector of item object with T value double

        vec.push_back( Item <double> ("Larry",100.0) );
        vec.push_back( Item <double> ("Moe",200.0) );
        vec.push_back( Item <double> ("Curly",300.0) );

    for(const auto& item : vec) 
        cout<<item.get_name()<<" "<<item.get_value()<<endl;

    return 0;

}