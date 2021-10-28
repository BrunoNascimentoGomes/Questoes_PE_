#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    
    long long int a;
    long long int b;
    long long int c;
    long long int x;
    
    for(a = 1 ;a < 1000; a++){
        for( b = 1; b < 1000; b++){
            c = (1000 - a - b);
            if(c*c == a*a + b*b){
                cout<<a*b*c<<endl;
                
             }
            
         }

    }

    return 0;
}
