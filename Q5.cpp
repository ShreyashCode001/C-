// Given a point (x, y), write a program to 
// find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter value of x";
    cin>>x;
    cout<<"Enter Value of y";
    cin>>y;
    
    if(x==0 && y==0){
        cout<<"The point is at origin";
    }
    else if(x==0){
        cout<<"The point is at x axis";
    }
    else if(y==0){
        cout<<"The point is at y axis";
    }
    else{
    cout<<"Somewhere";
    }
}