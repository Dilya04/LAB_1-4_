#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k;
    cin >> k;

    int n = sqrt(k);

    if (n * n == k) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}