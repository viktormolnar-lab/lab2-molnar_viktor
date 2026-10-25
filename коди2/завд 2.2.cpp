#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    
    if (n <= 0) {
        cout << "Кількість елементів має бути більше 0." << endl;
        return 0;
    }

    vector<int> numbers(n);
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    int min_val = numbers[0];
    int max_val = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] < min_val) {
            min_val = numbers[i];
        }
        if (numbers[i] > max_val) {
            max_val = numbers[i];
        }
    }

    double average = sum / n;
    int range = max_val - min_val;

    cout << "Середнє: " << average << endl;
    cout << "Максимальне: " << max_val << endl;
    cout << "Мінімільне: " << min_val << endl;
    cout << "Діапазон: " << range << endl;

    return 0;
}