#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < i; j++)
            cout<<" ";
        for(int j = 0; j < (r - i); j++)
            cout<<(i + 1);
        cout<<"\n";
    }

    return 0;
}