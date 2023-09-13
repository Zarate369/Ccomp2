#include <string>
#include <iostream>

class Date{
    
public:
    Date(int month, int day, int year){
            if((month < 1 )|| (month > 12)){
                mes=1;
            }
            else{
                mes=month;
            }
            dia=day;
            año=year;
        }
        int getmonth() {
            return mes;
        }
        void setmonth(int month){
            if((month < 1 )|| (month > 12)){
                mes=1;
            }
            else{
                mes=month;
            }  
        }
        int getday(){
            return dia;
        }
        void setday(int day){
            dia=day;
        }
        int getyear(){
            return año;
        }
        void setyear(int year){
            año=year;
        }
        void displayDate(){
            std::cout<<"\n"<< mes <<" / " << dia << " / " << año << "\n";
        }
private:
    int mes;
    int dia;
    int año;
};