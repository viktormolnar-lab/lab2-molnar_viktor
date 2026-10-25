#include <iostream>

using namespace std;

int main() {
    int sum = 0;

    for (int i = 2; i <= 100; i += 2) {
        sum += i;
    }

    cout << "Сума всіх парних чисел від 1 до 100: " << sum << endl;

    return 0;
}