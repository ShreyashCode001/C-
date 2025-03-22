// Write a function to count the number of digits in a 
// number and then print the square of this number.

#include<iostream>
using namespace std;


void count(int *n){
    int c=0;
    while(*n!=0){
        *n=*n/10;
        c++;
    }
    cout<< c;

}
int main(){
    int n ;
    cout<<"Enter a number ";
    cin>>n;
    count(&n);

}