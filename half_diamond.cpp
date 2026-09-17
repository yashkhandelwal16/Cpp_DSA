#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {  // Start from n-1 to avoid duplicating the middle row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;  // <-- Fixed: added endl
    }

    return 0;
}