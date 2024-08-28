#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    char oprator;

    cout << "num1: ";
    cin >> num1;

    cout << "num2: ";
    cin >> num2;

    cout << "Enter the oprator (+,-,*,/): ";
    cin >> oprator;

    switch(oprator) {
        case '+':
        cout << num1 <<  oprator  << num2 << " =  " << num1 + num2 << endl;
        break;

       case '-':
        cout << num1 << oprator << num2 << " =  " << num1 - num2 << endl;
        break;

       case '*':
        cout << num1 << oprator << num2 << " =  " << num1 * num2 << endl;
        break;

       case '/':
         if (num2 == 0) {
            cout << "Zero division situation!" << endl;
         }else {
            cout << num1 << oprator << num2 << " =  " << num1 / num2 << endl;
         }
         break;
    default:
    cout << "Invalid oprator!";
    }

}