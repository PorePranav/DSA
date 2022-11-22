#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    int value = 65;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < i + 1; j++, value++)
            cout<<(char)value<<" ";
        cout<<"\n";        
    }
    return 0;
}