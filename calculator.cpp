#include <iostream>
using namespace std;

int main() {
    
    double a, b, resultSum, resultSubtraction, resultMultiplication, resultDivision;
    int option;

    cout << "======Simple calculator======" << endl;
    cout << "Type your first number: "; cin >> a;
    cout << "Type your second number: "; cin >> b;
    
    cout << "============MENU============" << endl;
    cout << "1. + \n2. - \n3. * \n4. / \n5. Exit \n";
    cout << "Choose a mathematical operation: "; cin >> option;

    cout << "============================" << endl;

    switch (option) {
        case 1:
            cout << "You chose '+'. ";
            resultSum = a + b;
            cout << "The result for: " << a << " + " << b << " is: " << resultSum;
            break;
        case 2:
            cout << "You chose '-'. ";
            resultSubtraction = a - b;
            cout << "The result for: " << a << " - " << b << " is: " << resultSubtraction;
            break;
            case 3:
            cout << "You chose '*'. " << endl;
            resultMultiplication = a * b;
            cout<< "The result for:" << a << " * " << b << " is: " << resultMultiplication;
        break;

        case 4: 
        cout<< "You chose '/'.";
        if (b == 0)
        {
            cout << " math error" << endl;
            break;
        }
        else
        {
            resultDivision = a / b;
            cout << " The result for: " << a << " / " << b << " is: " << resultDivision;
            break;
        }

        case 5:
            cout << "Leaving...";
            break;

        default:
            cout << "Invalid selection";
            break;
    }
    
    return 0;
}