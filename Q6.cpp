

#include<iostream>
using namespace std;

// 5.Write a program to print all the ASCII values and 
// their equivalent characters of 26 alphabets using a while loop.

int main(){
    int i =65;
    while(i<=90){
        cout<<i<<"  "<<(char)i<<endl;
        i++;
    }
}