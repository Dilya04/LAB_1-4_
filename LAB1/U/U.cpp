#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int result = (n % m == 0 || m % n == 0) ? 1 : 2;

    cout << result << endl;

    return 0;
}
