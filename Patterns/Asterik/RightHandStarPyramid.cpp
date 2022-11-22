#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < (r - (i + 1)); j++)
            cout<<" ";
        for(int j = 0; j < i + 1; j++)
            cout<<"*";
        cout<<"\n";
    }

    return 0;
}