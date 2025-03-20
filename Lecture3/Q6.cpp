#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    if (A <= B && A <= C)
        cout << "A scored the least marks: " << A;
    else if (B <= A && B <= C)
        cout << "B scored the least marks: " << B;
    else
        cout << "C scored the least marks: " << C;
    
    return 0;
}
