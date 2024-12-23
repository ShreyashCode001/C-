#include <iostream>
using namespace std;
//WAP for finding the volume of the cylinder by taking radius and height as input.
int main() {
    double radius, height, volume;
    cin >> radius >> height;
    volume = 3.14 * radius * radius * height;
    cout << "Volume of the cylinder: " << volume << endl;
}
