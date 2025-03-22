#include<iostream>
using namespace std;
// Given two numbers a and b, write a function 
// to print all odd numbers between them.


void odd(int *a, int *b){
    cout<<"Odd numbers between "<<*a<<"and "<<*b<<"are : ";

    for(int i =*a;i<=*b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }

}
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    odd(&a,&b);

}