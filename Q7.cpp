#include<iostream>
using namespace std;
// Print the following pattern
// Sample Input : n = 4
// Output :
//    ****
//   ****
//  ****
// ****

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}