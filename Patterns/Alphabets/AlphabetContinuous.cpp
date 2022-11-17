#include <iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;

    for(int i = 0; i < r * r; i++){
        cout<<(char)(65 + i)<<" ";
        if((i + 1) % r == 0)
            cout<<"\n";
    }
    
    return 0;
}