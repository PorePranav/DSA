#include <iostream>
#include <vector>

int numberOfOccurences(std::vector<int>, int);
int main(){
    std::vector<int> numbers = {1, 1, 1, 2, 3, 4, 5, 6, 8, 10};
    int answer = numberOfOccurences(numbers, 1);
    std::cout<<answer<<std::endl;
    return 0;
}

int numberOfOccurences(std::vector<int> numbers, int target){
    int first = -1;
    int last = -1;

    int left = 0;
    int right = numbers.size() - 1;
    int mid = left + (right - left) / 2;

    while(left <= right){
        if(numbers[mid] == target){
            first = mid;
            right = mid - 1;
        }

        else if(numbers[mid] < target)
            left = mid + 1;
        
        else
            right = mid - 1;

        mid = left + (right - left) / 2; 
    }

    left = 0;
    right = numbers.size() - 1;
    mid = left + (right - left) / 2;

    while(left <= right){
        if(numbers[mid] == target){
            last = mid;
            left = mid + 1;
        }

        else if(numbers[mid] < target)
            left = mid + 1;
        
        else
            right = mid - 1;

        mid = left + (right - left) / 2;  
    }

    return (last - first) + 1;
}