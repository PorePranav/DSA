#include <iostream>

int bookAllocation(int*, int, int);
bool isPossible(int*, int, int, int);

int main(){
    int arr[] = {7,2,5,10,8};
    std::cout<<"Answer is: "<<bookAllocation(arr, 2, sizeof(arr) / 4)<<std::endl;
    return 0;
}

int bookAllocation(int* arr, int m, int n){
    int left = 0;
    int right = 0;
    int ans = -1;

    for(int i = 0; i < n; i++){
        right += arr[i];
    }

    int mid = left + (right - left) / 2;

    while(left < right){
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            right = mid;
        }
        else{
            left = mid + 1;
        }

        mid = left + (right - left) / 2;
    }

    return ans;
}

bool isPossible(int* arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid)
            pageSum += arr[i];
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}