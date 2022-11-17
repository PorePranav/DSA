#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(int i = 0; i < r; i++){
        for(int j = 65; j < (65 + r); j++)
            cout<<(char)j<<" ";
        cout<<"\n";
    }

    return 0;
}