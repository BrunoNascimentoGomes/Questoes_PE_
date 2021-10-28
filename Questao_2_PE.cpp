#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int fant = 1;
    int fprox = 2;
    
    int copia = 0;
    
    int total = 0;
    
    while(fprox <= 4000000){
        if((fprox%2) == 0){
            total = total + fprox;
        }
        
        copia = fprox;
        fprox = fprox + fant;
        fant = copia;
        
        
    }
    
    cout<<total<<endl;

    return 0;
}
       