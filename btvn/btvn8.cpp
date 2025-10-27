#include <stdio.h>

int main() {
    int a, b, c;

    printf("nhap do dai canh a: ");
    scanf("%d", &a);

    printf("nhap do dai canh b: ");
    scanf("%d", &b);

    printf("nhap do dai canh c: ");
    scanf("%d", &c);

    // kiem tra 3 canh > 0
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("ban da nhap sai moi ban nhap lai");
        return 0; // ket thuc chuong trinh neu sai
    }

    // kiem tra dieu kien tam giac
    if (a + b > c && a + c > b && b + c > a) {
        printf("day la tam giac ");
    } else {
        printf("day khong phai la tam giac");
    }

    return 0;
}


