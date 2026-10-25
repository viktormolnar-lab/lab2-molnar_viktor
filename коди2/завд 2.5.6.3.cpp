#include <iostream>

using namespace std;

int main() {
    cout << "Числа від 1 до 1000, які є кубами цілих чисел:" << endl;

    for (int x = 1; x * x * x <= 1000; x++) {
        int cube = x * x * x;
        cout << x << "^3 = " << cube << endl;
    }

    return 0;
}