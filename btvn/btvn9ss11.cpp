#include <stdio.h>

int main() {
    int n, arr[100];

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // D?ch các ph?n t? v? trái
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;  
                j--;
            }
        }
    }

    printf("\nMang sau khi loai bo trung lap la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

