#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un numero mayor que 1: ";
    cin >> num;

    while (num <= 1) {
        cout << "Error. Ingrese un numero mayor que 1: ";
        cin >> num;
    }

    while (num >= 1) {
        cout << num << endl;
        num--;
    }

    return 0;
    
