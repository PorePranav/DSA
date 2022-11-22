#include <iostream>
using namespace std;

int main(){
	int r;
	cout<<"Enter the number of rows: ";
	cin>>r;

	for(int i = 65; i < (65 + r); i++){
		for(int j = 0; j < r; j++){
			cout<<(char)i<<" ";
		}
		cout<<"\n";
	}

	return 0;
}
