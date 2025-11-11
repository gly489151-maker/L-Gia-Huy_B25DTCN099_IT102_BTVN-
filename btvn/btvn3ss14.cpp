#include <stdio.h>


int tinhTong(int a, int b) {
    int tong = a + b;  
    return tong;        
}

int main() {
    int x, y;
    printf("Nhap so thu nhat: ");
    scanf("%d", &x);
    printf("Nhap so thu hai: ");
    scanf("%d", &y);

    int kq = tinhTong(x, y);  
    printf("Tong cua %d va %d la: %d\n", x, y, kq);

    return 0;
}

