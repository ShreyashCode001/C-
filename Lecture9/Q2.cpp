// Write a function that takes the radius of a 
// circle as an argument and returns its area.

#include<iostream>
using namespace std;
int area(){
    float r;
    cout<<"nter Radius of circle : ";
    cin>>r;
    float area= 3.14* r *r;

    cout<<area;

}
int main(){
    area();

}