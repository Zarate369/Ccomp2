#include <iostream>
using namespace std;
int main(){
    char carac;
    cout << "Ingrese un caracter : ";
    cin >> carac;

    cout << "Su valor entero es : " << static_cast<int>(carac);

}