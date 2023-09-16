#include <iostream>
//Si el numero es primo o no
using namespace std;

int main(){
    int num;
    int cont{0};
    cout << "Ingrese numero:";
    cin >> num;

    for (int i=1;i <= num;i++){
        if (num%i==0){
            cont++;
        }
    }
    if (cont==2){
        cout << "El numero "<< num <<" es primo";
    }
    else{
        cout << "El numero " <<num <<" no es primo: ";
        for (int i=1;i <= num;i++){
            if (num%i==0){
                cout << " " << i;
            }
        }
    }
}