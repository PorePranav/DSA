#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(int i = 0; i < r; i++){
        for(int j = 0; j <= i; j++)
            cout<<(char)(65 + i)<<" ";
        cout<<"\n";
    }
    return 0;
}