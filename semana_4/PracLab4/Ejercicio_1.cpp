#include <iostream>
using namespace std;
//La suma de todos los multiplos de 3 o 5 menores a 1 000.
int main()
{
	int num=1000;
	int sum;
	for(int i=1;i<num;i++){
		if(i%3==0 || i%5==0){
			sum=sum+i;
		}
	}
	cout<<"La suma es: " << sum;
	
}