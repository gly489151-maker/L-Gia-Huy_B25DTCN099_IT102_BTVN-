#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, choice;
    int *p = NULL;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Nhap so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so phan tu: ");
            scanf("%d", &n);

            if (p != NULL) free(p); // gi?i phóng m?ng cu n?u dã có

            p = (int*)malloc(n * sizeof(int));
            for (int i = 0; i < n; i++) {
                printf("arr[%d] = ", i);
                scanf("%d", p + i);
            }
        }
        else if (choice == 2) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else {
                printf("Mang: ");
                for (int i = 0; i < n; i++) printf("%d ", *(p + i));
                printf("\n");
            }
        }
        else if (choice == 3) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else printf("Do dai mang: %d\n", n);
        }
        else if (choice == 4) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else {
                int sum = 0;
                for (int i = 0; i < n; i++) sum += *(p + i);
                printf("Tong cac phan tu la: %d\n", sum);
            }
        }
        else if (choice == 5) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else {
                int max = *p;
                for (int i = 1; i < n; i++) {
                    if (*(p + i) > max) max = *(p + i);
                }
                printf("Phan tu lon nhat: %d\n", max);
            }
        }

    } while (choice != 6);

    if (p != NULL) free(p); // gi?i phóng cu?i cùng
    return 0;
}

