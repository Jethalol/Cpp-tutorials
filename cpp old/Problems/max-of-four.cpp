/* Hacker rank problem for max of four number using conditional operator */
#include <bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
 
   int max = 0;

    max = a>b? (a>c? (a>d? a : d) : ( c>d? c : d ) ) : ( b>c? (b>d? b : d) : (c>d? c : d) ) ;   

    max =  ( (a>b? a : b) > (c>d? c : d) ?  (a>b? a : b) : (c>d? c : d) ) ;

    return max;

/* Both are correct and same logic, second one is more optimized */



}
int main() {
   int a{}, b{}, c{}, d{};
   
   cin>>a>>b>>c>>d;
   
        cout<<max_of_four(a,b,c,d)<<endl;
        
    return 0;
}
