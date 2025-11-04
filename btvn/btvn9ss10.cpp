#include <stdio.h>

struct Product {
    int id;       // M? s?n ph?m
    float price;  // Giá s?n ph?m
};

int main() {
    int n;
    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    struct Product arr[n];

    // Nh?p thông tin s?n ph?m
    for (int i = 0; i < n; i++) {
        printf("Nhap ma san pham thu %d: ", i + 1);
        scanf("%d", &arr[i].id);
        printf("Nhap gia san pham thu %d: ", i + 1);
        scanf("%f", &arr[i].price);
    }

    // --- T?M KI?M S?N PH?M THEO M? (BINARY SEARCH) ---
    int searchId;
    printf("\nNhap ma san pham can tim: ");
    scanf("%d", &searchId);

    // Gi? s? m?ng ð? ðý?c s?p x?p theo m? s?n ph?m
    int left = 0, right = n - 1, mid;
    int found = -1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid].id == searchId) {
            found = mid;
            break;
        } else if (arr[mid].id < searchId) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found != -1)
        printf("San pham co ma %d co gia: %.2f\n", arr[found].id, arr[found].price);
    else
        printf("Khong tim thay san pham co ma %d\n", searchId);

    // --- S?P X?P THEO GIÁ (BUBBLE SORT) ---
    for (int i = 0; i < n - 1; i++) {
        int flag = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].price > arr[j + 1].price) {
                struct Product temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) break;
    }

    // In danh sách s?n ph?m sau khi s?p x?p
    printf("\nDanh sach san pham sau khi sap xep theo gia tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("Ma: %d\tGia: %.2f\n", arr[i].id, arr[i].price);
    }

    return 0;
}

