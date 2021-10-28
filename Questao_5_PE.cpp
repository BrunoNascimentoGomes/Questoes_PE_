#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int i = 1;

    
    while(1){
        i = i + 1;
        if(i%10 == 0){                                         //Como eu sei q todos os números primos de 1 até 20, estão presentes de 10 até 20, 
            if(i%11 == 0){                                     //eu posso testar se "i" é divisível de 10 até 20, se n for, ele soma um ao valor de "i"
                if(i%12 == 0){                                 //e faz o teste novamente.
                    if(i%13 == 0){                             
                        if(i%14 == 0){
                            if(i%15 == 0){
                                if(i%16 == 0){
                                    if(i%17 == 0){
                                        if(i%18 == 0){
                                            if(i%19 == 0){
                                                if(i%20 == 0){
                                                   break;
   }}}}}}}}}}}}
    
    cout<<i<<endl;
  
    
    return 0;
}
