#include <iostream>
#include <vector>

int peakElement(std::vector<int>);
int main(){
    std::vector<int> numbers = {3, 4, 5, 1};
    std::cout<<"The peak element is: "<<peakElement(numbers)<<std::endl;
    return 0;
}

int peakElement(std::vector<int> numbers){
    int left = 0;
    int right = numbers.size() - 1;
    int mid = left + (right - left) / 2;

    while(left <= right){
        if(numbers[mid] > numbers[mid + 1] && numbers[mid] > numbers[mid - 1])
            return numbers[mid];
        else if(numbers[mid] < numbers[mid + 1])
            left = mid;
        else
            right = mid;
        
        mid = left + (right - left) / 2;
    }

    return -1;
}