#include<iostream>
using namespace std;

// 5.Display this GP - 3,12,48,.. upto ‘n’ terms.

int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    int a = 3;
    for(int i = 1;i<=n;i++){
        cout<<a<<endl;
        a=a*4;
    }
}