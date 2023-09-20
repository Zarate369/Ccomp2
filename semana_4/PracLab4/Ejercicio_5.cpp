#include <iostream>
using namespace std; 
//Cual es el numero mas pequeño positivo que sea divisible por todos los numeros del 1 a 20.
int main()
{
	int cont=0;
	int num1=20;
	long num=num1*4000000;
	do{
		cont=0;
		for(long i = 1; i<=num1;i++){
			if(num%i==0){
				cont++;
			}
		}
		num=num+num1;
	}
	while(cont<num1);
	cout<<"Numero: "<< num-num1;
}