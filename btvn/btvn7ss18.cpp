#include <stdio.h>

void sort(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int a[] = {9, 3, 7, 1, 5};
    int n = 5;

    sort(a, n);

    printArray(a, n);

    return 0;
}

