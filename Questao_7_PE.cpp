#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    
    int num = 2;
    int cont = 0;
    
    vector <int> primo;
    int tam;
    int j = 0;

    
    
    while(num){
        for(int a = 1; a <= num; a = a + 1){
            if(num%a == 0){
                cont = cont + 1;
            }
        }
        if(cont == 2){
            primo.push_back(num);

        }
        cont = 0;
        tam = primo.size();
        
        if(tam == 10001){
            break;
        }
        num = num + 1;
    }
    
    cout<<primo[10000]<<endl;
  

    return 0;
}
