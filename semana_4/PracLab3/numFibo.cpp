#include <iostream>
using namespace std;

int main()
{
	int i{0};
	int cont{0};
	int sum{1};
    int num;
    cout<< "Ingresa cantidad de numeros Fibonacci para mostrar: ";
    cin >> num;
    cout <<"Numeros:";
	do{
		int temp{0};
		temp=i;
		i=sum+i;
		cout<<" "<<i;
		sum=temp;
		cont++;
	}while(cont<num);
	cout << "\nfin";
	
}