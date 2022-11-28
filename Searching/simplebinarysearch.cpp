#include <iostream>
int binarySearch(int*, int, int);

int main(){
    int array[10] = {7, 12, 23, 45, 48, 51, 69, 88, 90, 98};
    int target = 0;
    int size = sizeof(array) / sizeof(array[0]);

    std::cout<<"Enter the number which you wish to search: ";
    std::cin>>target;

    int index = binarySearch(array, target, size);

    if(index != -1){
        std::cout<<target<<" found at index "<<index<<std::endl;
    }
    else{
        std::cout<<target<<" not found in the array"<<std::endl;
    }

    return 0;
}

int binarySearch(int* array, int target, int size){
    int left = 0, right = size - 1;
    int midIndex = left + (right - left) / 2;

    while(left <= right){
        if(array[midIndex] == target){
            return midIndex;
        }

        else if(target > array[midIndex]){
            left = midIndex + 1;
        }
        
        else{
            right = midIndex - 1;
        }

        midIndex = left + (right - left) / 2;
    }
    return -1;
}