#include <iostream>

using namespace std;

int main() {
    int target;
    cout << "Введіть цільове число: ";
    cin >> target;

    cout << "Пари додатних чисел, сума яких дорівнює " << target << ":" << endl;
    
    bool found = false;
    for (int a = 1; a <= target / 2; a++) {
        int b = target - a;
        if (a != b) { 
            cout << "(" << a << ", " << b << ")" << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Не знайдено підходящих пар додатних чисел." << endl;
    }

    return 0;
}