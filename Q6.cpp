// WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int l;
    int r=0;
    int a=n;
    while(n>0){
        r=r*10;
        l=n%10;
        r=r+l;
        n/=10;
    }
    cout<<"Reverse Number : "<<r<<endl;
    cout<<"Sum of Number and its Reverse : "<<(a+r);
}