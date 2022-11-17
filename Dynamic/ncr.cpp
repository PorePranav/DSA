#include<iostream>
using namespace std;
int factorial(int num){
    int factorial=1;
    for(int i=1; i<=num; i++){
        factorial*=i;
        
    }
    return factorial;
}
int ncr(int n, int r){
    int ncr = (factorial(n))/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n,r;
    cout<<"Enter n,r";
    cin>>n>>r;
    cout<<ncr(n,r);
}