#include <stdio.h>
#include <math.h>


int laSoNguyenTo(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("Nhap so luong so nguyen trong mang: ");
    scanf("%d", &n);

    int arr[n]; 

    
    for (int i = 0; i < n; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    printf("Cac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (laSoNguyenTo(arr[i])) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }

    printf("\nTong cac so nguyen to trong mang la: %d\n", sum);

    return 0;
}

