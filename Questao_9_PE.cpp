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
    
    for(a = 1 ;a < 1000; a++){                //Como a não pode ser maior que mil, pois a+b+c=1000
        for( b = 1; b < 1000; b++){           //Mesma explicação do primeiro for
            c = (1000 - a - b);               //Acha o valor de c para todos os casos de a e b de 1 até 1000
            if(c*c == a*a + b*b){             //Faz o teste para printar a multiplicação
                cout<<a*b*c<<endl;
                
             }
            
         }

    }

    return 0;
}
