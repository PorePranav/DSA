#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(int i = 0; i < r; i++){
        for(int j = r; j > i; j--)
            cout<<"*";
        cout<<"\n";
    }

    return 0;
}