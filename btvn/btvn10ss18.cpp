#include <stdio.h>

void deleteElement(int *arr, int *n, int pos){
    for(int i = pos; i < *n - 1; i++){
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int a[] = {10, 20, 30, 40, 50};
    int n = 5;

    deleteElement(a, &n, 2);

    printArray(a, n);

    return 0;
}

