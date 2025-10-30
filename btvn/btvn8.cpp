#include <stdio.h>

int main() {
    long n;        
    int x;         
    int dem = 0;   
    
    printf("Nhap so n: ");
    scanf("%ld", &n);

    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);

   
    if (n < 0) {
        n = -n;
    }

    // N?u n = 0 và x = 0 
    if (n == 0 && x == 0) {
        dem = 1;
    } else {
        while (n > 0) {
            int chuSo = n % 10; 
            if (chuSo == x) {
                dem++;          
            }
            n = n / 10;          
        }
    }

    printf("Chu so %d xuat hien %d lan trong so da nhap.\n", x, dem);

    return 0;
}

