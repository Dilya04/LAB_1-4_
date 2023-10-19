#include <iostream>
using namespace std;

int main() {
    int kRow, kCol, oRow, oCol;

    
    cin >> kRow >> kCol;

   
    cin >> oRow >> oCol;

    int dx = abs(kRow - oRow);
    int dy = abs(kCol - oCol);

    if (dx == 2 && dy == 1 || dx == 1 && dy == 2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

