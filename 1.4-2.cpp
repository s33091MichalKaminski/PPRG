#include <iostream>
using namespace std;

int main() {
    int number1, number2, number3;
    cout << "Podaj trzy liczby całkowite: ";
    cin >> number1 >> number2 >> number3;
    int max;

    if (number1 >= number2 && number1 >= number3) {
        max = number1;
    } else if (number2 >= number1 && number2 >= number3) {
        max = number2;
    } else {
        max = number3;
    }
    cout << "Najwieksza liczba to: " << max << endl;
    return 0;
    }