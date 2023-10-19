#include <iostream>
using namespace std;

int main() {
    int Row, Col, oRow, oCol;

    cin >> Row >> Col;

    cin >> oRow >> oCol;

    if (rookRow == oRow || Col == oCol) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}