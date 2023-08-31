#include <iostream>
using namespace std;

int main(){
    int number1{0};
    int number2{0};
    int number3{0};
    int may{0};

    cout <<"Ingresa el primer numero: ";
    cin >> number1;

    cout <<"Ingresa el segundo numero: ";
    cin >> number2;

    cout << "Ingresa el tercer numero: ";
    cin >> number3;

    if ((number1 >= number2) && (number1 >= number3)){
        may = number1;
    }
    else{
        if (number2 <=number3){
            may = number3;
        }
        else {
            may= number2;
        }
    }
    cout << "El mayor numerro es : " << may << endl;
}