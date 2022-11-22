#include <iostream>

int arraypivot(int*, int);

int main(){
	int arr[] = {-1,-1,-1,-1,0,1};
	std::cout<<"Pivot index of the array is: "<<arraypivot(arr, sizeof(arr)/4)<<std::endl;
	return 0;
}

int arraypivot(int* arr, int n){
	if(n == 0) return -1;
	int totalSum = 0, leftSum = 0;

	for(int i = 0; i < n; i++)
		totalSum += arr[i];

	for(int i = 0; i < n; i++){
		if(leftSum == (totalSum - arr[i]))
			return i;
		else{
			leftSum += arr[i];
			totalSum -= arr[i];
		}
	}

	return -1;
}
