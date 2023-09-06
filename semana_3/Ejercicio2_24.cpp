#include <iostream>
using namespace std;

int main(){
    int num1{0};
    int num2{0};
    int sum{0};


    cout <<"Ingresa el primer numero: ";
    cin >> num1;

    cout <<"Ingresa el segundo numero: ";
    cin >> num2;

    sum = num1 + num2;
    if ((num1%2)==1){
        cout << "El primer numero es Impar " << endl;

    }
    else{
        cout << "El primer numero es Par " << endl;
    }

    if ((num2%2)==1){
        cout << "El segundo numero es Impar " << endl;

    }
    else{
        cout << "El segundo numero es Par " << endl;
    }

    if ((sum%2)==1){
        cout << "La suma es Impar : " << sum << endl;

    }
    else{
        cout << "La suma es Par : " << sum << endl;
    }

}