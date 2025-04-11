#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
        int n = rows / 2;  // Half of the rows for symmetry

    // Upper part of the diamond
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << std::endl;
    }

    // Lower part of the diamond
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}