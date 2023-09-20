#include <iostream>
#include <math.h>
using namespace std; 
//Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.
int main()
{
	int num=100;
	int sum=0;
	int sum1=0;
	
	sum = (num*(num+1)*(2*num+1))/6;
	cout << "Suma de los cuadrados: " << sum << endl;
	sum1= pow((num*(num+1))/2,2);
	cout << "Cuadrado de la suma: " << sum1 << endl;
	cout << "La resta es: " << sum1 - sum;
}