#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter Your Amount: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount. Please enter a positive value." << endl;
        return 0;
    }

    int notes_500 = amount / 500;
    amount %= 500;

    int notes_100 = amount / 100;
    amount %= 100;

    int notes_50 = amount / 50;
    amount %= 50;

    int notes_10 = amount / 10;
    amount %= 10;

    int coins_5 = amount / 5;
    amount %= 5;

    int coins_1 = amount;

    if (notes_500 > 0)
        cout << notes_500 << " notes of 500" << endl;
    if (notes_100 > 0)
        cout << notes_100 << " notes of 100" << endl;
    if (notes_50 > 0)
        cout << notes_50 << " notes of 50" << endl;
    if (notes_10 > 0)
        cout << notes_10 << " notes of 10" << endl;
    if (coins_5 > 0)
        cout << coins_5 << " coins of 5" << endl;
    if (coins_1 > 0)
        cout << coins_1 << " coins of 1" << endl;

    return 0;
}
