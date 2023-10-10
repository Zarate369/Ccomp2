#include <iostream>
using namespace std;
void cuboPorReferencia(int*); // firma de la funcion
int main() {
    int num{5};
    cout << "El valor original del numero es " << num;
    cuboPorReferencia(&num); // pasando la direccion de memoria del numero a la
    // funcion cuboPorReferencia
    cout << "\nEl nuevo valor del numero es " << num << endl;
}
// calcula el cubo de *nPtr; modifica la variable num en main
void cuboPorReferencia(int* nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cubo de *nPtr
}

/*#include <iostream>
using namespace std;
int main() {
    int a{7};
    int* aPtr = &a;
    cout << "La direccion de la variable a es " << &a
    << "\nEl valor de aPtr es " << aPtr ;
    cout << "\nEl valor de a es " << a
    << "\nEl valor de *aPtr es " << *aPtr << endl;
}
*/