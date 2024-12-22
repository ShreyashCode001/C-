#include<iostream>
using namespace std;
// Any year is input through the keyboard.
// Write a program to determine whether the year is a leap year or not.
// (Considering leap year occurs after every 4 years)


int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year or not
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    }
    else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
