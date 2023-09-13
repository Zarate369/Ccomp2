#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main()
{
    MotorVehicle car1{"EE.UU","Diesel B7", 2012 };
    MotorVehicle car2{"China","Diesel B10", 2020 };
    cout << "Vehiculo 1: \n";
    car1.displayCarDetails();
    cout << "Vehiculo 2: \n";
    car2.displayCarDetails();
}