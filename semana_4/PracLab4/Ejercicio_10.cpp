#include <iostream>
#include <math.h>
using namespace std; 
// suma de primos menores a 2 000 000.

bool prim(long num ){
    int cont=0;
    num=sqrt(num);
    for (int i=1;i<=num;i++){
        if(num%i==0){
            cont++;
        }
        //num=sqrt(num);
    }
    if (cont==1){
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    long num = 23456789;
    long sum=0;
    int cont;
    
    cout << "Suma: "  << prim(num);
}