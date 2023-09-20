#include <iostream>
using namespace std; 
//Los terminos en la secuencia fibonacci no debe superar 4 000 000, encontrar la suma de pares
int main()
{
	
	int i{0};
	int cont{0};
	int sum{1};
	int num=4000000;
    cout<<"Numeros Fibonacci:";
	do{
		int temp{0};
		temp=i;
		i=sum+i;
		if(i<num){
			cout<<"\n"<<i;
		}
		
		sum=temp;
		if(i%2==0 && i<num){
			cont=cont+i;
		}
	}while(i<=num);
	cout << "\n\nSuma de pares: "<< cont;
}