#include <stdio.h>


long long giaithua(int n) {
    long long gt = 1; 
    for (int i = 1; i <= n; i++) {
        gt *= i; 
    }
    return gt; 
}

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong tinh duoc giai thua cho so am!\n");
    } else {
        printf("Giai thua cua %d la: %lld\n", n, giaithua(n));
    }

    return 0;
}

