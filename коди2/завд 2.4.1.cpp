#include <iostream>

using namespace std;

int main() {
    int n;

    
    while (true) {
        cout << "Введіть ціле число N: ";
        cin >> n;
        int result = (n >= 0 && n % 5 == 0) ? (n / 5) : -1;

        cout << "Результат: " << result << endl << endl;
    }

    return 0;
}