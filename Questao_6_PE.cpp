#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    
    int soma_quadrados = 0;
    int quadrado_soma;
    int aux = 0;
    int soma_da_dif;
    
    for(int i = 1; i <= 100; i = i + 1){
        soma_quadrados = soma_quadrados + pow(i,2);
    }
    
    for(int x = 1; x<=100 ; x = x + 1){
        aux = aux + x;
    }
    
    quadrado_soma = pow(aux,2);
    
    soma_da_dif = quadrado_soma - soma_quadrados;
    
    cout<<soma_da_dif<<endl;


    return 0;
}
