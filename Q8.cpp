// Print first ‘n’ fibonacci numbers.

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;
    int a=1,b=1;
    int z;
    cout<<1<<" "<<1<<" ";
    for(int i=1;i<=n-2;i++){
        z=a+b;

        a=b;
        b=z;

        cout<<z<<" ";


    }

}