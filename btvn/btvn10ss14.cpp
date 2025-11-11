#include <stdio.h>

// ================== KHAI BÁO CÁC HÀM ==================
void nhapMang(int arr[], int *n);
void inMang(int arr[], int n);
void themPhanTu(int arr[], int *n, int x, int pos);
void suaPhanTu(int arr[], int n, int pos, int newValue);
void xoaPhanTu(int arr[], int *n, int pos);
void sapXepTangDan(int arr[], int n);
void sapXepGiamDan(int arr[], int n);
int timKiemTuyenTinh(int arr[], int n, int x);
int timKiemNhiPhan(int arr[], int n, int x);

// ================== HÀM MAIN ==================
int main() {
    int arr[100];
    int n = 0, choice, subchoice;

    do {
        printf("\n========= MENU =========\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra cac phan tu\n");
        printf("3. Them mot phan tu vao vi tri chi dinh\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa mot phan tu o vi tri chi dinh\n");
        printf("6. Sap xep cac phan tu\n");
        printf("7. Tim kiem phan tu\n");
        printf("8. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;

            case 2:
                inMang(arr, n);
                break;

            case 3: {
                int x, pos;
                printf("Nhap gia tri can them: ");
                scanf("%d", &x);
                printf("Nhap vi tri muon chen (0-%d): ", n);
                scanf("%d", &pos);
                themPhanTu(arr, &n, x, pos);
                break;
            }

            case 4: {
                int pos, newValue;
                printf("Nhap vi tri muon sua (0-%d): ", n - 1);
                scanf("%d", &pos);
                printf("Nhap gia tri moi: ");
                scanf("%d", &newValue);
                suaPhanTu(arr, n, pos, newValue);
                break;
            }

            case 5: {
                int pos;
                printf("Nhap vi tri muon xoa (0-%d): ", n - 1);
                scanf("%d", &pos);
                xoaPhanTu(arr, &n, pos);
                break;
            }

            case 6:
                printf("\n--- MENU CON (Sap xep) ---\n");
                printf("a. Giam dan (chon 1)\n");
                printf("b. Tang dan (chon 2)\n");
                printf("Chon: ");
                scanf("%d", &subchoice);
                if (subchoice == 1)
                    sapXepGiamDan(arr, n);
                else if (subchoice == 2)
                    sapXepTangDan(arr, n);
                else
                    printf("Lua chon khong hop le!\n");
                break;

            case 7:
                printf("\n--- MENU CON (Tim kiem) ---\n");
                printf("a. Tuyen tinh (chon 1)\n");
                printf("b. Nhi phan (chon 2)\n");
                printf("Chon: ");
                scanf("%d", &subchoice);
                int x;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &x);
                if (subchoice == 1) {
                    int kq = timKiemTuyenTinh(arr, n, x);
                    if (kq == -1) printf("Khong tim thay!\n");
                    else printf("Tim thay tai vi tri %d\n", kq);
                } else if (subchoice == 2) {
                    sapXepTangDan(arr, n); // ph?i s?p x?p trý?c
                    int kq = timKiemNhiPhan(arr, n, x);
                    if (kq == -1) printf("Khong tim thay!\n");
                    else printf("Tim thay tai vi tri %d\n", kq);
                } else printf("Lua chon khong hop le!\n");
                break;

            case 8:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 8);

    return 0;
}

// ================== Ð?NH NGH?A CÁC HÀM ==================

void nhapMang(int arr[], int *n) {
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void inMang(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n, int x, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    (*n)++;
    printf("Da them phan tu thanh cong!\n");
}

void suaPhanTu(int arr[], int n, int pos, int newValue) {
    if (pos < 0 || pos >= n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    arr[pos] = newValue;
    printf("Da sua thanh cong!\n");
}

void xoaPhanTu(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Da xoa thanh cong!\n");
}

void sapXepTangDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Da sap xep tang dan!\n");
}

void sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Da sap xep giam dan!\n");
}

int timKiemTuyenTinh(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int timKiemNhiPhan(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

