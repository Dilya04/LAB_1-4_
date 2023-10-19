#include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    int next_number = number + 1;
    int previous_number = number - 1;

    cout << "The next number for the number " << number << " is " << next_number << "." << endl;

    cout << "The previous number for the number " << number << " is " << previous_number << "." << endl;

    return 0;
}
