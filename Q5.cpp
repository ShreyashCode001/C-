// WAP to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter A Number : ";
    cin >> n;
    int z;
    int s = 0;
    while (n > 0)
    {
        z = n % 10;
        if (z % 2 == 0)
        {
            s = s + z;
        }
        n /= 10;
    }
    cout << "sum of all the even digits of a given number : " << s;
}