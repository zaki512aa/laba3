#include <iostream>
using namespace std;

// факториал
long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

int main() {
    int m, n;
    cout << "vvedite diapazon [m, n]: ";
    cin >> m >> n;

    long long sum = 0;

    for (int i = m; i <= n; ++i) {
        if (i % 2 == 0) {
            sum += factorial(i);
        }
    }

    cout << "summa fact ot " << m << " do " << n << " ravna: " << sum << endl;

    return 0;
}