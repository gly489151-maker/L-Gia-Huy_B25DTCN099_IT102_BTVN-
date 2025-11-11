#include <stdio.h>
#include <stdbool.h>  

bool kiemTraSoNguyenTo(int n) {
    if (n < 2) return false;  

    for (int i = 2; i * i <= n; i++) {  
        if (n % i == 0) return false;  
    }

    return true;  
}

int main() {
    int n;
    printf("Nhap mot so: ");
    scanf("%d", &n);

    if (kiemTraSoNguyenTo(n)) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }

    return 0;
}

