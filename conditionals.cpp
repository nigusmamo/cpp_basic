#include <iostream>
using namespace std;
int main() {
    int num ;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << num <<" is Negative number" << endl;
    } else{
        cout << num <<" is Positive number" << endl;
    }
}