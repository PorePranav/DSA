#include<iostream>
using namespace std;

int main(){
    int number;
    int count=0;
    cin>>number;

    for(int i=2; i<=(number/2); i++){
        if(number%i==0){
            count++;
        }
    }
    if(count>2){
        cout<<"Not a prime";
    }
    else{
        cout<<"Prime";
    }
}