#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int num;
    int cop = 0;
    int rev;
    int rest;
    int palin = 0;
    for(int a=999 ; a>99; a--){        
        for(int b=999; b>99; b--){          //Calcula os valores possíveis da multiplicação de números de 3 dígitos.
            num = a*b;
            cop = num;
            rev = 0;
            while(cop != 0){               //Faz o reverso
                rest=cop%10;
                rev=rev * 10+rest;
                cop/=10;
            }
            
            if((num == rev) && (num > palin)){   //Faz a verificação se o número é igual ao reverso, e se é o maior possível.
                palin = num;
            }
        }
    }
    cout<<palin<<endl;


    return 0;
}

