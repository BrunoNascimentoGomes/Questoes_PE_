#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    
    vector <long long> primo;
    long long num = 2;
    
    long long a;
    long long cont = 0;
    
    long long total = 0;
    
    long long x;
    
    
    while(num < 2000000){
        int aux = sqrt(num);
        for(int a = 2; a <= aux; a = a + 1){
            if(num%a == 0){
                cont = 1;
            }
        }
        if(!cont){
            primo.push_back(num);
        }
        cont = 0;
        num = num + 1;
        
    }
    
    x = primo.size();
    
    for(int i = 0; i < x ; i++){
        total = total + primo[i];
    }
    cout<<total<<endl;
    

    return 0;
}
