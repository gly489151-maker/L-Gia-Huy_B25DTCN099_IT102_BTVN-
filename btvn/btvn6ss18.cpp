#include <stdio.h>

int search(int *arr, int n, int value){
    for(int i = 0; i < n; i++){
        if(arr[i] == value)
            return i;
    }
    return -1;
}

int main(){
    int a[] = {1, 2, 4, 5, 6, 7};
    int n = 6;

    int pos = search(a, n, 7);

    printf("%d", pos);

    return 0;
}

