#include <iostream>

void printArray(int*, int);
void selectionSort(int*, int);

int main(){
    int arr[] = {64, 25, 12, 22, 11};

    selectionSort(arr, sizeof(arr) / 4);
    printArray(arr, sizeof(arr) / 4);

    return 0;
}

void printArray(int* arr, int n){
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

void selectionSort(int* arr, int n){
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;        

    }
}
