#include <iostream>
#include <math.h>
using namespace std; 
// suma de primos menores a 2 000 000.

bool prim(long num ){
    int cont=0;
    for (int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            cont++;
        }
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
    unsigned long long sum=0;
    int cont;
    for(int i=2 ;i<=2000000;i++){
        if(prim(i)){
            cout << i << endl;
            sum = sum+i;
        }
    }
    cout << "La suma es : "  << sum;
}