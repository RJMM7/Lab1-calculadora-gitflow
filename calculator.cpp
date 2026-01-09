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
    
    return 0;
}