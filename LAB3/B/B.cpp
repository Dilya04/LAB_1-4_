#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;

    while (N > 0) {
        if (N % 10 == 0) {
            count++;
        }
        N /= 10;
    }

    cout << count << endl;

    return 0;
}