#include <string>
#include <iostream>

class MotorVehicle{
    
public:
    MotorVehicle(std::string mak, std::string fuelTyp, int yearOfManufactur): color{"Negro"}, engineCapacity{1500}{
            make=mak;
            fuelType=fuelTyp;
            yearOfManufacture=yearOfManufactur;
        }
        std::string getmake(){
            return make;
        }
        void setmake(std::string mak){
            make=mak;
        }
        std::string getfuelType(){
            return fuelType;     
        }
        void setfuelType(std::string fuelTyp){
            fuelType=fuelTyp;
        }
        int getyearOfManufacture(){
            return yearOfManufacture;
        }
        void setyearOfManufacture(int yearOfManufac){
            yearOfManufacture=yearOfManufac;
        }
        void displayCarDetails(){
            std::cout <<"\nHecho en :"<<make;
            std::cout <<"\nTipo de Gasolina: "<<fuelType;
            std::cout <<"\nAño de creacion: " <<yearOfManufacture;
            std::cout <<"\nColor: "<<color;
            std::cout <<"\nCapacidad del motor "<< engineCapacity << "cc\n";
        }

private:
    std::string make;
    std::string fuelType;
    int yearOfManufacture;
    std::string color;
    int engineCapacity;
};