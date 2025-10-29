#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    int temp = n; 
    int dao = 0;

    // Ð?o s? ð? in ðúng th? t? t? trái sang ph?i
    while (temp != 0) {
        int digit = temp % 10;
        dao = dao * 10 + digit;
        temp /= 10;
    }

    // In t?ng ch? s?
    printf("Cac chu so: ");
    while (dao != 0) {
        int digit = dao % 10;
        printf("%d ", digit);
        dao /= 10;
    }

    return 0;
}

