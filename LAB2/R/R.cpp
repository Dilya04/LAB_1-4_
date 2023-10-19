#include <iostream>
using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;

    int minutes_per_cutlet = 2 * m;

    int total_minutes = n * minutes_per_cutlet;

    int pans_required = (n + k - 1) / k;

    total_minutes *= pans_required;

    cout << total_minutes << endl;

    return 0;
}




