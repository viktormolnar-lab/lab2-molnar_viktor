#include <iostream>

using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Введіть ціле число N (від'ємне число для виходу): ";
        cin >> n;

        
        if (n < 0) {
            break;
        }

    
        if (n % 5 != 0) {
            continue;
        }

        
        cout << "Результат: " << n / 5 << endl << endl;
    }

    cout << "До побачення!" << endl;

    return 0;
}