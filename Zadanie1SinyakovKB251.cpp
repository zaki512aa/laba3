#include <iostream>
using namespace std;

// проверка простого числа
bool prost(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b;
    cout << "vvedite diapazon a i b: ";
    cin >> a >> b;

    cout << "\nProstie [" << a << ", " << b << "]:";
    for (int i = a; i <= b; ++i) {
        if (prost(i))
            cout << i << " ";
    }

    cout << "\n\nDryzhistvinnie:";
    for (int i = a; i <= b - 2; ++i) {
        if (prost(i) && prost(i + 2))
            cout << "(" << i << ", " << i + 2 << ")";
    }

    return 0;
}