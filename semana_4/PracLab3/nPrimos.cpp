#include <iostream>

using namespace std;

int main(){
    int num;
    int cont{0};
    cout << "Ingrese numero:";
    cin >> num;

    for (int i=1;i <= num;i++){
        cont=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                cont++;
            }
        }
        if(cont==2){
            cout<<" "<<i;
        }
    }
}