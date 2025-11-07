#include <stdio.h>

int main() {
    
    int arr[] = {10, 25, 7, 25, 9, 18, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    if (n < 2) {
        printf("Loi: Mang phai co it nhat 2 phan tu.\n");
        return 0;
    }

    
    int max1, max2;

    
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    
    if (max1 == max2) {
        printf("Khong ton tai phan tu lon thu hai trong mang.\n");
    } else {
        printf("Phan tu lon nhat: %d\n", max1);
        printf("Phan tu lon thu hai: %d\n", max2);
    }

    return 0;
}

