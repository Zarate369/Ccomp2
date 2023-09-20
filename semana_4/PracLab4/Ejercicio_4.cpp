#include <iostream>
using namespace std; 
//Encuentra el mas largo palindromo hecho por el producto de 3 digitos.
int main()
{
	int inv=0;
	int num;
	int mult;
	int num1=999;
	int cont=0;
	for (int i=num1;i>100;i--){
		for(int h=num1;h>100;h--){
			mult=i*h;
			num=mult;
			inv=0;
			while(mult>0){
				inv=inv * 10 + (mult % 10);
				mult = mult / 10;
			}
			//cout<<"\n"<< num;
			if(inv==num){
				if(cont<num){
					cont=num;
				}
			}
		}
	}
	cout<< "\nMayor: " <<cont;
}