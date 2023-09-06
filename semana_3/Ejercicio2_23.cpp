#include <iostream>
using namespace std;

int main(){
    int number1{0};
    int number2{0};
    int number3{0};
    int number4{0};
    int number5{0};
    int may{0};
    int menr{0};

    cout <<"Ingresa el primer numero: ";
    cin >> number1;

    cout <<"Ingresa el segundo numero: ";
    cin >> number2;

    cout << "Ingresa el tercer numero: ";
    cin >> number3;
    
    cout << "Ingresa el cuarto numero: ";
    cin >> number4;
    
    cout << "Ingresa el quinto numero: ";
    cin >> number5;

    if ((number1 >= number2) && (number1 >= number3) && (number1 >= number4) && (number1 >= number5)){
        may = number1;
    }
    else if ((number2 >= number3) && (number2 >= number4) && (number2 >= number5)){
        may = number2;
    }
    else if ((number3 >= number4) && (number3 >= number5)){
        may = number3;
    }
    else if ((number4 >= number5)){
        may = number4;
    }
    else{
        may=number5;
    }

    cout << "El mayor numero es : " << may << endl;

    if ((number1 <= number2) && (number1 <= number3) && (number1 <= number4) && (number1 <= number5)){
        menr = number1;
    }
    else if ((number2 <= number3) && (number2 <= number4) && (number2 <= number5)){
        menr = number2;
    }
    else if ((number3 <= number4) && (number3 <= number5)){
        menr = number3;
    }
    else if ((number4 <= number5)){
        menr = number4;
    }
    else{
        menr = number5;
    }

    cout << "El menor numero es : " << menr << endl;
}