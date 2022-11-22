#include <bits/stdc++.h>

int aggressiveCows(std::vector<int>&, int, int);
bool isPossible(std::vector<int>&, int, int, int);

int main(){
    std::vector<int> arr = {5,4,3,2,1,1000000000};
    std::cout<<"Answer is: "<<aggressiveCows(arr, 2, sizeof(arr) / 4)<<std::endl;
    return 0;
}

int aggressiveCows(std::vector<int>& arr, int k, int n){
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr[n - 1];
    int mid = left + (right - left) / 2;
    int ans = -1;

    while (left <= right){
        if(isPossible(arr, mid, k, n)){
            ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
        
        mid = left + (right - left) / 2;
    }
    
    return ans;
}

bool isPossible(std::vector<int>& arr, int mid, int k, int n){
    int cowCount = 1;
    int lastPos = arr[0];

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}