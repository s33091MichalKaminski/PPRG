#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;
    cout << "Podaj trzy liczby calkowite: ";
    cin >> liczba1 >> liczba2 >> liczba3;
    
    int max = number1;
    
    if (number2 > max)
        max = number2;
        
    if (number3 > max)
        max = number3;
        
        cout << "Najwieksza liczba to: " << max << endl;
    return 0;
}
