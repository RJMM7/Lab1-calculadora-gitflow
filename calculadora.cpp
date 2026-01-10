#include <iostream>

using namespace std;

int main ( ) {

    int operacion;
    float resultado;
    float a, b;

    cout<< "que operacion desea hacer?"<< endl;
    cout<< " 1. Suma" <<endl;
    cout<< " 2. Resta" <<endl;
    cout<< " 3. Multiplicacion" <<endl;
    cout<< " 4. Division" <<endl;
        cin>> operacion;

        switch ( operacion ) {
            case 3:
            cout << "ingrese el valor de a" << endl;
        cin >> a;
        cout << "ingrese el valor de b" << endl;
        cin >> b;
        resultado = a * b;
        cout << " el resultado es:" << resultado << endl;
        break;

        case 4: 
        cout << "ingrese el valor de a" << endl;
        cin >> a;
        cout << "ingrese el valor de b" << endl;
        cin >> b;
        if (b == 0)
        {
            cout << " math error" << endl;
            break;
        }
        else
        {
            resultado = a / b;
            cout << " el resultado es:" << resultado << endl;
            break;
        }

         default:
        cout << "resultado invalido" << endl;
        break;


        }

    return 0;

}