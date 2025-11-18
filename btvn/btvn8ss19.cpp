#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void printEven(int *arr, int n) {
    printf("Cac so chan trong mang: ");
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) printf("%d ", *(arr + i));
    }
    printf("\n");
}

void printPrime(int *arr, int n) {
    printf("Cac so nguyen to trong mang: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(*(arr + i))) printf("%d ", *(arr + i));
    }
    printf("\n");
}

void reverseArray(int *arr, int n) {
    for (int i = 0; i < n/2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - 1 - i);
        *(arr + n - 1 - i) = temp;
    }
    printf("Mang da dao nguoc: ");
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");
}

void sortAscending(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang tang dan: ");
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");
}

void sortDescending(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    printf("Mang giam dan: ");
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");
}

void searchElement(int *arr, int n, int x) {
    int found = 0;
    printf("Vi tri cua %d trong mang: ", x);
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("Khong tim thay");
    printf("\n");
}

int main() {
    int n = 0, choice;
    int *p = NULL;

    do {
        printf("\n----- MENU -----\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu trong mang\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so phan tu: ");
            scanf("%d", &n);

            if (p != NULL) free(p);
            p = (int*)malloc(n * sizeof(int));

            for (int i = 0; i < n; i++) {
                printf("arr[%d] = ", i);
                scanf("%d", p + i);
            }
        }
        else if (choice == 2) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else printEven(p, n);
        }
        else if (choice == 3) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else printPrime(p, n);
        }
        else if (choice == 4) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else reverseArray(p, n);
        }
        else if (choice == 5) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else {
                int subChoice;
                printf("1. Tang dan\n");
                printf("2. Giam dan\n");
                printf("Nhap lua chon sap xep: ");
                scanf("%d", &subChoice);
                if (subChoice == 1) sortAscending(p, n);
                else if (subChoice == 2) sortDescending(p, n);
                else printf("Lua chon khong hop le.\n");
            }
        }
        else if (choice == 6) {
            if (p == NULL) printf("Chua nhap mang.\n");
            else {
                int x;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                searchElement(p, n, x);
            }
        }

    } while (choice != 7);

    if (p != NULL) free(p);
    return 0;
}

