#include <iostream>
using namespace std;

int main(){
    string cad;
    string rev;
    cout << "Ingrese una palabra : ";
    cin >> cad;

    for (int i=cad.size()-1;i >= 0;i--){
        rev = cad.substr(i,1)+" ";
        cout << rev;
    }
    


}