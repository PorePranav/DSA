#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < (r - i); j++)
            cout<<(j + 1);
        for(int j = 0; j < 2 * i; j++)
            cout<<"*";
        for(int j = r - i; j > 0; j--)
            cout<<j;
        cout<<"\n";
    }

    return 0;
}