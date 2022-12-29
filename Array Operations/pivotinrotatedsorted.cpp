#include <iostream>
#include <vector>

int pivotInRotatedSorted(std::vector<int>);

int main(){
    std::vector<int> numbers = {5, 6, 1, 2, 3, 4};
    std::cout<<"The pivot element of the rotated and sorted array is: "<<pivotInRotatedSorted(numbers)<<std::endl;

    return 0;
}

int pivotInRotatedSorted(std::vector<int> numbers){
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

    return numbers[mid];
}