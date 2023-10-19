#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    char binaryR[64];

    int index = 0;

    while (N > 0) {
        binaryR[index] = (N % 2) + '0';
        N /= 2;
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        cout << binaryR[i];
    }

    cout << endl;

    return 0;
}