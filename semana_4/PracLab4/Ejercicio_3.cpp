#include <iostream>
using namespace std; 
//cual es el mayor factor primo de 600851475143.
int main()
{
	unsigned long long num=600851475143;
	for(long i=2;i<=num;i++){
		if(num%i==0){
			cout <<"\nNumero: "<< i;
			num=num/i;
			i=1;
		}
	}
}