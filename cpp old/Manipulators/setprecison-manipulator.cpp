#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float m  = 993.145678923998;

    cout<<setprecision(3)<<m<<endl;     /* setprecision(n) without fixed starts counting from beginning of int that is number before decimal places
/                                        will also be counted e.g for precison(3) it'll only take 993 */ 

 
    cout<<fixed<<setprecision(3)<<m;    /* With fixed it starts counting digits after the decimal, i.e. value before decimal are printed as it is
/                                   and then it counts precision digits. e.g. for fixed precision(3) it'll take digits 3 after decimal 993.145 */ 
                                            
    return 0;

}