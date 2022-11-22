#include <iostream>
using namespace std;

int main(){
    int r; 
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < (r - i); j++)
            cout<<" ";
        for(int j = 0; j < (i + 1); j++)
            cout<<j + 1;
        for(int j = i ; j > 0; j--)
            cout<<j;
        cout<<"\n";
    }

    return 0;
}