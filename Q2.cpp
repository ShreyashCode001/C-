// Given the radius of the circle predict 
// whether numerically area of this circle is larger than 
// the circumference or not.
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter the radius of circle : ";
    cin>>x;

    float c = 2*3.14*x;
    float a = 3.14*x*x;

    cout<<"Circumference is : "<<c<<endl;
    cout<<"Area is : "<<a<<endl;

    if(a>c){
        cout<<"numerically area of this circle is larger than the circumference";
    }
    else{
        cout<<"numerically area of this circle is smaller than the circumference";

    }


}