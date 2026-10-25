#include <iostream>

using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Введіть ціле число N: ";
        cin >> n;

        
        if (n < 0 || n % 5 != 0) {
            continue;
        }

        
        cout << "Результат: " << n / 5 << endl << endl;
    }

    return 0;
}