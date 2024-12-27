// Print the factorials of first ‘n’ numbers

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of n : ";
    cin>>n;
    int z=1;
    for(int i=1;i<=n;i++){
        z*=i;
        cout<<"Factorial of "<<i<<" is "<<z<<endl;

    }

}