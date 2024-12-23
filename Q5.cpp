#include <iostream>
using namespace std;

//WAP to find the difference between ASCII of two characters ,take them as input .

int main() {
    char ch1, ch2;
    cin >> ch1 >> ch2;
    int difference = (char)ch1 - (char)ch2;
    cout << "Difference between ASCII values: " << difference << endl;
    return 0;
}
