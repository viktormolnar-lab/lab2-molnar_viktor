#include <iostream>

using namespace std;


bool isPrime(int number) {
    if (number < 2) return false;
    
    
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int n;
    cout << "Введіть кількість простих чисел (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "Кількість повинна бути більше 0." << endl;
        return 0;
    }

    cout << "Перші " << n << " простих чисел: ";

    int count = 0;    
    int candidate = 2;  
    while (count < n) {
        if (isPrime(candidate)) {
            cout << candidate << " ";
            count++;
        }
        candidate++;
    }

    cout << endl;
    return 0;
}