#include<iostream>
using namespace std;

// Print the following pattern
// Input n = 4
// Output:
//    *
//   **
//  ***
// ****
//  ***
//   **
//    *

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Upper triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) >= n + 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower triangle
    for (int i = 1; i < n; i++) { 
        for (int j = 1; j <= n; j++) {
            if (j > i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
