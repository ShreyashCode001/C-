#include<iostream>
using namespace std;

// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******


int main(){
    int m,n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(j==1 || j==n || i==1 || i==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }            
        }
        cout<<endl;

    }
}