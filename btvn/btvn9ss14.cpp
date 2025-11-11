#include <stdio.h>

// Hàm t?m Ý?c Chung L?n Nh?t (UCLN)
int timUCLN(int a, int b) {
    // Dùng thu?t toán Euclid
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x = 46;
    int y = 60;

    int ucln = timUCLN(x, y);

    printf("Hai so: %d va %d\n", x, y);
    printf("Uoc chung lon nhat la: %d\n", ucln);

    return 0;
}

