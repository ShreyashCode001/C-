#include<iostream>
using namespace std;

// Print the following pattern
// Input: n = 4
// Output:

// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5


int main(){
   int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=65;j<=(i+64);j++){
            if(i%2==0){
                cout<<(char)j<<" ";
            }
            
        }
        for(int k=1;k<=i;k++){
            if(i%2!=0){
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }

}