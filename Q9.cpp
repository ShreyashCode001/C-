#include<iostream>
using namespace std;

// Print the following pattern
// Input : n = 4
// Output :
//        A
//      A B
//    A B C
//  A B C D

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=(n-1);k>=i;k--){
            cout<<"  ";
        }
        for(int j=65;j<=(64+i);j++){
            cout<<(char)j<<" ";
        }
        
        cout<<endl;
    }

}