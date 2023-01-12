#include <iostream>
#include <utility>

std::pair<int, int> firstAndLast(int*, int, int);

int main(){
    int arr[] = {1, 3, 5, 5, 8, 8};
    std::pair<int, int> result = firstAndLast(arr, sizeof(arr) / sizeof(arr[0]), 8);
    std::cout<<"Left most occurence is: "<<result.first<<std::endl;
    std::cout<<"Right most occurence is: "<<result.second<<std::endl; 
    return 0;
}

std::pair<int, int> firstAndLast(int* arr, int n, int k){
    int first = -1;
    int last = -1;

    int left = 0;
    int right = n - 1;
    int mid = left + (right - left) / 2;

    while(left <= right){
        if(arr[mid] == k){
            first = mid;
            right = mid - 1;
        }

        else if(arr[mid] < k)
            left = mid + 1;
        
        else
            right = mid - 1;

        mid = left + (right - left) / 2; 
    }

    left = 0;
    right = n - 1;
    mid = left + (right - left) / 2;

    while(left <= right){
        if(arr[mid] == k){
            last = mid;
            left = mid + 1;
        }

        else if(arr[mid] < k)
            left = mid + 1;
        
        else
            right = mid - 1;

        mid = left + (right - left) / 2;  
    }

    return std::pair<int, int>(first, last);

}
