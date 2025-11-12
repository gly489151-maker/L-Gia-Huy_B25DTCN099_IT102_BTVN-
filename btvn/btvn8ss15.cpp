#include <stdio.h>


int removeDuplicates(int arr[], int size) {
    int newSize = 0; 
    int temp[100];   

    for (int i = 0; i < size; i++) {
        int trung = 0; 

        
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == temp[j]) {
                trung = 1;
                break;
            }
        }

        
        if (trung == 0) {
            temp[newSize] = arr[i];
            newSize++;
        }
    }

    
    for (int i = 0; i < newSize; i++) {
        arr[i] = temp[i];
    }

    return newSize; 
}

int main() {
    int n;
    int arr[100];

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nMang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    n = removeDuplicates(arr, n); 

    printf("\nMang sau khi loai bo phan tu trung lap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

