#include <iostream>
using namespace std;
int main() {
    int angle; // crate variable called angle
    cout << "Enter an angle: " ;
    cin >> angle; // asign input value in angle variable

// using switch stetment insted of conditionals
    switch(angle) {
        case 0:
            cout << "positive x-axis" << endl;
            break;
        case 90:
            cout << "positive y-axis" << endl;
            break;
        case 180:
            cout << "negative x-axis" << endl;
            break;
        default :
            cout << "negative y-axis" << endl;
        
    }
} 