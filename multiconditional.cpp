#include <iostream>
using namespace std;

int main() {
    int angle; // crate variable called angle
    cout << "Enter an angle: " ;
    cin >> angle; // asign input value in angle variable
    if (angle == 0) {
        cout << "it lies on the positive x-axis"<< endl;
    } else if (angle == 90) {
        cout << "it lies on the positive y-axis"<< endl;
    } else if (angle == 180) {
        cout << "it lies on the negative x-axis"<< endl;
    } else if (angle == 270) {
        cout << "it lies on the negative y-axis"<< endl;
    } else if (angle > 270) {
        cout << "it lies on fourth quadrant"<< endl;
    } else if (angle > 180) {
        cout << "it lies on third quadrant"<< endl;
    } else if (angle > 90) {
        cout << "it lies on second quadrant"<< endl;
    } else {
        cout << "it lies on first quadrant"<< endl;
    }
}
