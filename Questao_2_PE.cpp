#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int fant = 1;
    int fprox = 2;
    
    int copia = 0;
    
    int total = 0;
    
    while(fprox <= 4000000){             //Dentro do while, ele faz o cálculo dos fatores da sequência e verifica se ele par, se for, soma ao total 
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
       
