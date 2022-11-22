#include<iostream>
using namespace std;

int main(){
    int number;
    int reverse=0;
    cin>>number;
    while (number){
        int lastDigit=number%10;
        reverse=reverse*10 + lastDigit;
        number/=10;
    }
    cout<<reverse;
}
