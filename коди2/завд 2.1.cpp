#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введіть кількість повторень (n >= 0): ";
    cin >> n;

    if (n < 0) {
        cout << "Число повинно бути невід'ємним!" << endl;
        return 1;
    }

    
    cout << "\n--- Цикл for ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Hello, World!" << endl;
    }


    cout << "\n--- Цикл while ---" << endl;
    int j = 0;
    while (j < n) {
        cout << "Hello, World!" << endl;
        j++;
    }

    cout << "\n--- Цикл do-while ---" << endl;
    int k = 0;
    if (n > 0) { 
        do {
            cout << "Hello, World!" << endl;
            k++;
        } while (k < n);
    }

    return 0;
}