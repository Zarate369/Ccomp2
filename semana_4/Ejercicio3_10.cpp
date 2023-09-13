#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice producto1{"024234","Televisor Samsung", 2 , 1300};
    Invoice producto2{"024235","Galaxy S20", 4 , 1000};

    cout <<"Numero del Producto1: " << producto1.getnumero();
    cout <<"\nProducto:            " << producto1.getdescripcion();
    cout <<"\nCantidad:            " << producto1.getcantidad();
    cout <<"\nPrecio c/u:          " << producto1.getprecio();
    cout <<"\nImpuesto c/u:        " << producto1.getimpuesto() *  producto1.getprecio();
    cout <<"\nDescuento:           " << producto1.getdescuento();
    cout <<"\nMonto total:         " << producto1.getInvoiceAmount() << endl;

    cout <<"\nNumero del Producto2: " << producto2.getnumero();
    cout <<"\nProducto:            " << producto2.getdescripcion();
    cout <<"\nCantidad:            " << producto2.getcantidad();
    cout <<"\nPrecio c/u:          " << producto2.getprecio();
    cout <<"\nImpuesto c/u:        " << producto2.getimpuesto() *  producto2.getprecio();
    cout <<"\nDescuento:           " << producto2.getdescuento();
    cout <<"\nMonto total:         " << producto2.getInvoiceAmount() << endl;

    cout <<"Ingrese precio del producto1: ";
    int precio;
    cin >> precio;
    producto1.setprecio(precio);

    cout <<"\nNumero del Producto1: " << producto1.getnumero();
    cout <<"\nProducto:            " << producto1.getdescripcion();
    cout <<"\nCantidad:            " << producto1.getcantidad();
    cout <<"\nPrecio c/u:          " << producto1.getprecio();
    cout <<"\nImpuesto c/u:        " << producto1.getimpuesto() *  producto1.getprecio();
    cout <<"\nDescuento:           " << producto1.getdescuento();
    cout <<"\nMonto total:         " << producto1.getInvoiceAmount() << endl;

}