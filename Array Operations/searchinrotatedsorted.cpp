#include <iostream>
#include <vector>

int searchInRotatedSorted(std::vector<int>, int);

int main(){
    std::vector<int> numbers = {4,5,6,7,0,1,2};
    std::cout<<"The pivot element of the rotated and sorted array is: "<<searchInRotatedSorted(numbers, 0)<<std::endl;

    return 0;
}

int searchInRotatedSorted(std::vector<int> numbers, int target){
    int left = 0;
    int right = numbers.size() - 1;
    int mid = left + (right - left) / 2;

    while(left < right){
        if(numbers.at(mid) < numbers.at(right))
            right = mid;
        else 
            left = mid + 1;

        mid = left + (right - left) / 2;
    } 

    int pivot = left;

    if(numbers.at(pivot) <= target && target <= numbers.at(numbers.size() - 1)){
        left = pivot;
        right = numbers.size() - 1;
    }
    else{
        left = 0;
        right = pivot;
    }

    mid = left + (right - left) / 2;

    while(left <= right){
        if(numbers.at(mid) == target)
            return mid;
        else if(numbers.at(mid) < target)
            left = mid + 1;
        else 
            right = mid - 1;

        mid = left + (right - left) / 2;
    }

    return -1;
}