#include<iostream>
using namespace std;
int factorial(int num){
    int factorial=1;
    for(int i=1; i<=num; i++){
        factorial*=i;
        cout<<factorial<<endl;
    }
    return factorial;
}
int main(){
    cout<<factorial(6)<<endl;
}