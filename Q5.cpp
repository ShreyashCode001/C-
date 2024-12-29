#include<iostream>
using namespace std;

// Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *


int main(){
   int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=(n-1);i>=1;i--){
        for(int k=1;k<=i;k++){
        cout<<"*";
        
    }
    cout<<endl;
    }
    
}

