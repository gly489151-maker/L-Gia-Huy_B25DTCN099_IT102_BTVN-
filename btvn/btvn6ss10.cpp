#include <stdio.h>

int main() {
    int n;

    printf("Nhap so cua mang la: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    int temp;
    int flag;

    for (int i = 0; i < n - 1; i++) {
        flag = 0; 
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }

    printf("Mang sau khi sap xep theo thu tu tang dan la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

