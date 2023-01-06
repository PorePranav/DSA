#include <iostream>
void insertionSort(int*, int);
void printArray(int*, int);

int main(){
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    
    std::cout<<"Before sorting: ";
    printArray(arr, sizeof(arr) / 4);
    
    insertionSort(arr, sizeof(arr) / 4);
    
    std::cout<<"After sorting: ";
    printArray(arr, sizeof(arr) / 4);
    return 0;
}

void printArray(int* arr, int n){
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void insertionSort(int* arr, int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0){
            if(arr[j] > temp)
                arr[j + 1] = arr[j];

            else
                break;

            j--;
        }

        arr[j + 1] = temp;
    }
}
