#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    
    for (int i = 3; i < 1000; i = i + 3){
        
        x  = x + i;
        
    }
    for (int i = 5; i < 1000; i = i + 5){
        
        y  = y + i;
        
    }
    for (int i = 15; i < 1000; i = i + 15){
        
        z  = z + i;
        
    }
    
    cout<<x+y-z<<endl;
    return 0;
}
       