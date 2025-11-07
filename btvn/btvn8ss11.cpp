#include <stdio.h>

int main() {
    int n;
    int arr[100];

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int maxCount = 0;  
    int mostValue = arr[0]; 

    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
            mostValue = arr[i];
        }
        // N?u b?ng nhau thì b? qua d? gi? ph?n t? d?u tiên
    }

    printf("\nPhan tu xuat hien nhieu nhat la: %d", mostValue);
    printf("\nSo lan xuat hien: %d\n", maxCount);

    return 0;
}

