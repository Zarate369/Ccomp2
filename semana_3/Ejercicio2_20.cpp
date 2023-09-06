#include <iostream>
using namespace std;

int main(){
    double pi=3.14159;
    double rad;
    double diamc;
    double circ;
    double Areac;

    cout << "Ingresar el radio del circulo: ";
    cin >> rad;

    diamc = rad*2;
    circ = rad*2*pi;
    Areac = rad*rad*pi;

    cout << "Diametro del circulo: " << diamc << endl;
    cout << "Circunferencia del circulo: " << circ << endl;
    cout << "Area del circulo: " << Areac << endl;
}