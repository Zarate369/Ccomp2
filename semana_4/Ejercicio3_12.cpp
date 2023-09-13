#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    Date date1{27,10, 2012 };
    Date date2{12,26,2010 };
    cout <<"Fecha 1: ";
    date1.displayDate();
    cout <<"Fecha 2: ";
    date2.displayDate();

}