#include <iostream>
using namespace std;

int main(){
    int num1{0};
    int num2{0};
    int num3{0};
    int fact{0};


    cout <<"Ingresa el primer numero: ";
    cin >> num1;

    cout <<"Ingresa el segundo numero: ";
    cin >> num2;

    cout <<"Ingresa el tercer numero: ";
    cin >> num3;

    if ((num1%num3)==0){
        cout << "El numero " << num1 << " es multiplo de " << num3 << endl;
    }
    else {
        cout << "El numero " << num1 << " no es multiplo de " << num3 << endl;
    }

    if ((num2%num3)==0){
        cout << "El numero " << num2 << " es multiplo de " << num3 << endl;
    }
    else {
        cout << "El numero " << num2 << " no es multiplo de " << num3 << endl;
    }

}