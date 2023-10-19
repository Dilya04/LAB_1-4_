#include <iostream>
using namespace std;

int main() {
    int qRow, qCol, oRow, orCol;

    cin >> qRow >> qnCol;

    cin >> orRow >> oCol;

    if (qRow == oRow || qCol == oCol || abs(qRow - oRow) == abs(qCol - oCol)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}