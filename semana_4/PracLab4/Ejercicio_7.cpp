#include <iostream>
using namespace std; 
// Cual es el 10001 numero primo.
int main()
{
	int num=10001;
	int cont=0;
	
	for (int i=2; 1;i++){
		int cont1=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				cont1++;
			}
		}
		if(cont1==2){
			cont++;
			
		}
		if(cont == num){
			cout << i << endl;
			break;
		}
	}
}