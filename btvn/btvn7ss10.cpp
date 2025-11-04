#include <stdio.h>

int main() {
    int n, value;
    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];

    
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Nh?p giá tr? c?n t?m
    printf("Nhap so can tim: ");
    scanf("%d", &value);

    int left = 0;
    int right = n - 1;
    int mid;
    int found = -1; 


    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == value) {
            found = mid;
            break;
        } else if (arr[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    
    if (found != -1) {
        printf("%d\n", found);
    } else {
        printf("Khong tim thay\n");
    }

    return 0;
}

