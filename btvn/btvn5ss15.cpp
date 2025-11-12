#include <stdio.h>
void timPhanTuNhieuNhat(int arr[], int n, int *giaTri, int *tanSuat) {
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
    }

    *giaTri = mostValue; 
    *tanSuat = maxCount; 
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

    int value, count;
    timPhanTuNhieuNhat(arr, n, &value, &count);

    printf("Phan tu xuat hien nhieu nhat la: %d\n", value);
    printf("So lan xuat hien: %d\n", count);

    return 0;
}

