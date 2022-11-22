#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int number){
    int count;
    for(int i=2; i<=sqrt(number); i++){
        if(number%i==0){
            return false;
        }
    }
   return true;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}
