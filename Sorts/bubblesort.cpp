#include <iostream>

void bubbleSort(int*, int);
void printArray(int*, int);

int main(){
    int arr[] = {10, 1, 7, 6, 14, 9};

    printArray(arr, sizeof(arr)/4);
    bubbleSort(arr, sizeof(arr)/4);
    printArray(arr, sizeof(arr)/4);

    return 0;
}

void printArray(int* arr, int n){
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void bubbleSort(int* arr, int n){
    bool isSorted = true;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                isSorted = false;
            }
        }

        if(isSorted)
            break;
    }
}