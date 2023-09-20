#include <iostream>
#include <math.h>
using namespace std; 
//Existe exactamente un triplete pitagórico para el cual a + b + c = 1000, encuentra a.b.c .
int main()
{
int num=1000;
	for(int a=1; a<=num/3;a++){
        for(int b=a+1; b<=num/2;b++){
            int c=num-a-b;
            if((pow(a,2)+pow(b,2)==pow(c,2)) &&((a+b+c)==1000)){
                cout << a << " x " << b << " x " << c << " = " << a*b*c;
            }
        }
    }
}