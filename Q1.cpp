#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter Your Amount : ";
    cin>>amount;
    

    if(amount%500==0){
        cout<<(amount/500)<<" notes of 500"<<endl;
    }
    else if(amount%500!=0){
        cout<<(amount/500)<<" notes of 500"<<endl;
        if((amount%500)%100==0){
            cout<<(amount%500)/100<<" notes of 100"<<endl;
        }
        else if(((amount%500)%100!=0)){
            cout<<(amount%500)/100<<" notes of 100"<<endl;
            if(((amount%500)%100)%50==0){
                cout<<((amount%500)%100)/50<<" notes of 50"<<endl;
            }
            else if(((amount%500)%100)%50!=0){
                cout<<((amount%500)%100)/50<<" notes of 50"<<endl;
                if((((amount%500)%100)%50)%10==0){
                    cout<<(((amount%500)%100)%50)/10<<" notes of 10"<<endl;
                }
                else if((((amount%500)%100)%50)%10!=0){
                    cout<<(((amount%500)%100)%50)/10<<" notes of 10"<<endl;
                    if(((((amount%500)%100)%50)%10)%5==0){
                        cout<<((((amount%500)%100)%50)%10)/5<<" coins of 5"<<endl;
                    }
                    else if(((((amount%500)%100)%50)%10)%5!=0){
                        cout<<((((amount%500)%100)%50)%10)/5<<" coins of 5"<<endl;
                        if((((((amount%500)%100)%50)%10)%5)%1==0){
                            cout<<(((((amount%500)%100)%50)%10)%5)/1<<" coins of 1"<<endl;
                        }
                    }
                }
            }

        }
    }
    
}



