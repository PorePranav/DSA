#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ori=n;
    int sum=0;
    while(n>0){
        int lastDigit=n%10;
        sum += pow(lastDigit,3);
        n/=10;
    }
    if(ori==sum){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}