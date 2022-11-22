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
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}