#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    string oprator;

    cout << "num1: ";
    cin >> num1;

    cout << "num2: ";
    cin >> num2;

    cout << "Enter the oprator (+,-,*,/): ";
    cin >> oprator;

    if (oprator == "+") {
        cout << num1 << oprator << num2 << " = " << num1 + num2 << endl;
    }else if (oprator == "-") {
        cout << num1 << oprator << num2 << " = " << num1 - num2 << endl;
    }else if (oprator == "*") {
        cout <<  num1 << oprator << num2 << " = " << num1 * num2 << endl;
    }else if (oprator == "/") {
        if (num2 == 0) {
            cout << "Zero division sitiuation!" << endl;
        }else {
            cout << num1 << oprator << num2 << " = " << num1 / num2 << endl;
        }
        
    }else {
        cout << "invalid oprator!" << endl;
    }
}