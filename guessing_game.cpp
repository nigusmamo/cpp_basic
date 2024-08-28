#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    srand(time(0));
    int random_number = rand() % 10 +1;
    int guess;
    cout << "Enter your guess: " ;
    cin >> guess;
    if (guess == random_number) {
        cout << "you won! " << endl;
    }else {
        cout << "sorry " << "the number was "<< random_number << endl;
    }
} 