#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* heights = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int PetyaHeight;
    cin >> PetyaHeight;

    int position = 1;
    for (int i = 0; i < N; i++) {
        if (PetyaHeight <= heights[i]) {
            break;
        }
        position++;
    }

    cout << position << endl;

    delete[] heights;

    return 0;
}
