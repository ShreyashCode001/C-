#include<iostream>
using namespace std;

// 4.Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

int main(){
    int n;
    cout<<"Enter number of terms : ";
    cin>>n;
    int a = 4;
    for(int i = 1;i<=n;i++){
        cout<<a<<endl;
        a=a+3;
    }
}