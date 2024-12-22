#include<iostream>
using namespace std;

//Given three points (x1, y1), (x2, y2) and (x3, y3), 
//write a program to check if all the three points fall on one straight line.

int main() {
    int x1, y1, x2, y2, x3, y3;
    
    // Input the coordinates of the three points
    cout << "Enter coordinates of first point (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of second point (x2, y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates of third point (x3, y3): ";
    cin >> x3 >> y3;
    
    // Calculate the area of the triangle formed by the three points
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    
    // If area is 0, the points are collinear
    if (area == 0) {
        cout << "The points are collinear (on the same straight line)." << endl;
    }
    else {
        cout << "The points are not collinear." << endl;
    }
    
    return 0;
}
