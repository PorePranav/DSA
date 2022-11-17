#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int index;
    int max=INT_MIN;
    cin>>index;

    for(int i=0; i<=index; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}