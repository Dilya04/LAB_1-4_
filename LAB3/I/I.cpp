#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    double sum = 0.0;
    double factorial = 1.0;

    for (int i = 0; i <= N; i++) {
        sum += 1.0 / factorial;
        factorial *= (i + 1);
    }

    sum = round(sum * 100000.0) / 100000.0;

    cout << sum << endl;

    return 0;
}