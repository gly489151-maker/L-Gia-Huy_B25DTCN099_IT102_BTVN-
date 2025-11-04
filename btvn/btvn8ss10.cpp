#include <stdio.h>

int main() {
    int n, value;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp, flag;
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
        if (flag == 0) break;
    }

    scanf("%d", &value);

    int left = 0, right = n - 1, mid, found = -1;
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

    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (found != -1)
        printf("Chi so cua phan tu can tim: %d\n", found);
    else
        printf("Khong tim thay phan tu trong mang.\n");

    return 0;
}

