#include <iostream>
using namespace std;

// summa cifr
int sumcifr(int number) {
    int sum = 0;
    number = abs(number);

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}

int main() {
    int n;
    cout << "zadaite kolichestvo chisel: ";
    cin >> n;

    if (n <= 0) {
        cout << "kolichestvo chisel dolzhno byt polozhitelnym!" << endl;
        return 1;
    }

    int minsum = 1000, maxsum = -1;
    int minnumber = 0, maxnumber = 0;

    cout << "chisla ot 1 do " << n << ":" << endl;

    for (int i = 1; i <= n; i++) {
        int currentsum = sumcifr(i);

        cout << i << " ";

        if (currentsum < minsum) {
            minsum = currentsum;
            minnumber = i;
        }
        if (currentsum > maxsum) {
            maxsum = currentsum;
            maxnumber = i;
        }
    }

    cout << endl;
    cout << "chislo s naimenshey summoy cifr: " << minnumber
         << " (summa cifr = " << minsum << ")" << endl;
    cout << "chislo s naibolshey summoy cifr: " << maxnumber
         << " (summa cifr = " << maxsum << ")" << endl;

    return 0;
}