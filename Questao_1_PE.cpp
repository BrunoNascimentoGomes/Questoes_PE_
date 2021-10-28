#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    
    for (int i = 3; i < 1000; i = i + 3){       //Soma tds os multiplos de 3 até 1000
        
        x  = x + i;
        
    }
    for (int i = 5; i < 1000; i = i + 5){       //Soma tds os multiplos de 5 até 1000
        
        y  = y + i;
        
    }
    for (int i = 15; i < 1000; i = i + 15){    //Soma tds os multiplos de 3 e 5 ao mesmo tempo até 1000
        
        z  = z + i;
        
    }
    
    cout<<x+y-z<<endl;              //Soma os múltiplos de 3 e 5 e exclui os que são múltiplos dos dois ao mesmo tempo
    return 0;
}
       
