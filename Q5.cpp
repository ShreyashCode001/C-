//Write a program to input sides of a triangle and 
//check whether a triangle is equilateral, scalene or isosceles triangle.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enten Fisrt Side : ";
    cin>>a;
    cout<<"Enter Second Side : ";
    cin>>b;
    cout<<"Enter Third Side : ";
    cin>>c;

    if(a==b==c){
        cout<<"Equilateral Sides";
    }
    else if((a==b) || (b==c) || (c==a)){
        cout<<"Isoceles triangle";   
    }
    else{
        cout<<"Scalean Triangle";
    }

}