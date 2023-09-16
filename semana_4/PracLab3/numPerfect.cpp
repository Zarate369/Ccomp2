#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int lim;
    unsigned long num{0};
    int cont{0};
    unsigned long num1{0};
    int cont1{0};
    cout << "Ingresar numero: ";
    cin >> lim;
    for(int i=1;1;i++){
        num=pow(2,i)-1;
        cont=0;
        for(unsigned long j=1;j<=num;j++){
            if(num%j==0){
                cont++;
                if(cont>2){
                    break;
                }
            }
        }
        if (cont==2){
            num1=pow(2,i-1)*num;
            cout << " " << num1;
            cont1++;
        }
        if(cont1==lim){
            break;
        }
    }

}