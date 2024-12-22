//Write a C++ program to input any character and check whether it is the alphabet, digit or special character.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        cout << "The character is an alphabet.";
    else if (ch >= '0' && ch <= '9')
        cout << "The character is a digit.";
    else
        cout << "The character is a special character.";

    return 0;
}
