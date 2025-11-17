#include <stdio.h>

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }
}

int main(){
    int a[] = {5, 10, 15, 20, 25};
    int n = 5;

    printArray(a, n);

    return 0;
}

