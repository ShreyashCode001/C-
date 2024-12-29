#include<iostream>
using namespace std;

// Print the following pattern
// Sample Input : n= 4
// Output :
// 1
// 2 1
// 3 2 1
// 4 3 2 1

int main(){
   int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}