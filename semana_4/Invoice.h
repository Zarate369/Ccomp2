#include <string>

class Invoice{
    
public:
    Invoice(std::string numero, std::string descripcion, int cantidad, int precio): impuesto{0.20}, descuento{0}{
            num=numero;
            descrip=descripcion;
            cant=cantidad;
            prec=precio;

        }
        std::string getnumero() const{
            return num;
        }
        void setnumero(std::string numero){
            num=numero;
        }
        std::string getdescripcion() const{
            return descrip;
        }
        void setdescripcion(std::string descripcion){
            descrip=descripcion;
        }
        int getcantidad() const{
            return cant;
        }
        void setcantidad(int cantidad){
            if (cantidad >0){
                cant= cantidad;
            }
        }
        int getprecio() const{
            return prec;
        }
        void setprecio(int precio){
            if(precio>0){
                prec=precio;
            }
        }
        double getimpuesto() const{
            return impuesto;
        }
        void setimpuesto(double impsto){
            impuesto=impsto;
        }
        double getdescuento() const{
            return descuento;
        }
        void setdescuento(double descuent){
            descuento=descuent;
        }
        double getInvoiceAmount(){
            monto=cant*prec;
            monto=monto+ (monto*impuesto)-descuento;
            return monto;
        }
private:
    std::string num;
    std::string descrip;
    int cant;
    int prec;
    double impuesto;
    double descuento;
    double monto;
};