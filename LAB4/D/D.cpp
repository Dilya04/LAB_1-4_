﻿#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int count = 0; 

    for (int i = 1; i < N; i++) {
        if (arr[i] > arr[i - 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}