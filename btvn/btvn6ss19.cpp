#include <stdio.h>

void copyArray(int *src, int *dest, int n) {
    for(int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int A[n], B[n];

    for(int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    copyArray(A, B, n);

    printf("Mang B sau khi sao chep: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}

