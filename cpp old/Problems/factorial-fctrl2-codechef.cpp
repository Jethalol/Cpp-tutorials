/* FCTRL2 - Big factorial numbers */

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int number;
    cin>>number;
    
    int size = 10;
    int nfact[size-1], j = size-1, carry = 0;
    
        nfact[size-1] = 1;
    
    while(number>0) {
        
        int x;
    
    for(int i = size-1; i>=j; i--) {
        
        x = nfact[i]*number + carry;
        
        nfact[i] = x%10;
        
        carry = x/10;
        
    }
        while(carry>0) {
            
            nfact[--j] = carry%10;
            carry/=10;
        }
        
            number--;
    }
    
    for(int i=j; i<size; i++) 
        cout<<nfact[i];
        
    return 0;
    
}