#include <iostream>
using namespace std;

int main() {
    int l, b;
    cin >> l >> b;
    int A = l * b;
    int P = 2 * (l + b);
    if (A > P) 
        cout << "A is greater than Perimeter";
    else 
        cout << "Perimeter is greater than or equal to Area";
}
