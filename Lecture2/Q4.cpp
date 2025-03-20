#include <iostream>
using namespace std;
//WAP for finding the volume of the cylinder by taking radius and height as input.
int main() {
    float radius, height, volume;
    cout<<"Enter Radius of cylinder : ";
    cin >> radius;
    cout<<"Enter Height of cylinder : ";
    cin>> height; 
    volume = 3.14 * radius * radius * height;
    cout << "Volume of the cylinder: " << volume << endl;
}
