#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    
    long int numero = 600851475143;
    int divisor = 2;
    int maiordiv = 0;
    
    while(numero > 1){
        if(numero%divisor == 0){
            maiordiv = divisor;
            numero = numero/divisor;
        }
        else{
            divisor++;
        }
    }
    
    cout<<maiordiv<<endl;


    return 0;
}
