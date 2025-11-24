#include <stdio.h>
#include <string.h>

#define MAX 100

struct Date {
    int ngay;
    int thang;
    int nam;
};

struct Order {
    char maDonHang[50];
    char tenKhachHang[50];
    struct Date ngayDat;
    double tongTien;
    char trangThai[20];
};

int main() {
    struct Order list[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n------ MENU QUAN LY DON HANG ------\n");
        printf("1. Nhap don hang moi\n");
        printf("2. Hien thi danh sach don hang\n");
        printf("3. Cap nhat trang thai don hang\n");
        printf("4. Xoa don hang theo ma\n");
        printf("5. Sap xep don hang theo tong tien\n");
        printf("6. Tim kiem don hang theo ma\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        fflush(stdin);

        switch(choice) {

            // ================================
            // 1. Nh?p don hàng
            // ================================
            case 1: {
                printf("Nhap ma don hang: ");
                gets(list[n].maDonHang);

                printf("Nhap ten khach hang: ");
                gets(list[n].tenKhachHang);

                printf("Nhap ngay dat (ngay thang nam): ");
                scanf("%d %d %d",
                    &list[n].ngayDat.ngay,
                    &list[n].ngayDat.thang,
                    &list[n].ngayDat.nam);

                printf("Nhap tong tien: ");
                scanf("%lf", &list[n].tongTien);

                fflush(stdin);
                printf("Nhap trang thai: ");
                gets(list[n].trangThai);

                n++;
                printf("Them don hang thanh cong!\n");
                break;
            }

            // ================================
            // 2. Hi?n th? danh sách don hàng
            // ================================
            case 2: {
                if (n == 0) {
                    printf("Danh sach rong!\n");
                    break;
                }

                for (int i = 0; i < n; i++) {
                    printf("\n--- Don hang %d ---\n", i + 1);
                    printf("Ma DH: %s\n", list[i].maDonHang);
                    printf("Ten KH: %s\n", list[i].tenKhachHang);
                    printf("Ngay dat: %02d/%02d/%04d\n",
                           list[i].ngayDat.ngay,
                           list[i].ngayDat.thang,
                           list[i].ngayDat.nam);
                    printf("Tong tien: %.2lf\n", list[i].tongTien);
                    printf("Trang thai: %s\n", list[i].trangThai);
                }
                break;
            }

            // ================================
            // 3. C?p nh?t tr?ng thái don hàng
            // ================================
            case 3: {
                char ma[50];
                printf("Nhap ma don hang can cap nhat: ");
                gets(ma);

                int found = -1;
                for (int i = 0; i < n; i++) {
                    if (strcmp(list[i].maDonHang, ma) == 0) {
                        found = i;
                        break;
                    }
                }

                if (found == -1) {
                    printf("Khong tim thay don hang!\n");
                } else {
                    printf("Nhap trang thai moi: ");
                    gets(list[found].trangThai);
                    printf("Cap nhat thanh cong!\n");
                }
                break;
            }

            // ================================
            // 4. Xóa don hàng
            // ================================
            case 4: {
                char ma[50];
                printf("Nhap ma don hang can xoa: ");
                gets(ma);

                int pos = -1;
                for (int i = 0; i < n; i++) {
                    if (strcmp(list[i].maDonHang, ma) == 0) {
                        pos = i;
                        break;
                    }
                }

                if (pos == -1) {
                    printf("Khong tim thay don hang!\n");
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        list[i] = list[i + 1];
                    }
                    n--;
                    printf("Xoa thanh cong!\n");
                }
                break;
            }

            // ================================
            // 5. S?p x?p theo t?ng ti?n
            // ================================
            case 5: {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (list[i].tongTien > list[j].tongTien) {
                            struct Order temp = list[i];
                            list[i] = list[j];
                            list[j] = temp;
                        }
                    }
                }
                printf("Sap xep thanh cong!\n");
                break;
            }

            // ================================
            // 6. Tìm ki?m don hàng theo mã
            // ================================
            case 6: {
                char ma[50];
                printf("Nhap ma don hang can tim: ");
                gets(ma);

                int found = -1;
                for (int i = 0; i < n; i++) {
                    if (strcmp(list[i].maDonHang, ma) == 0) {
                        found = i;
                        break;
                    }
                }

                if (found == -1) {
                    printf("Khong tim thay!\n");
                } else {
                    printf("\nMa DH: %s\n", list[found].maDonHang);
                    printf("Ten KH: %s\n", list[found].tenKhachHang);
                    printf("Ngay dat: %02d/%02d/%04d\n",
                           list[found].ngayDat.ngay,
                           list[found].ngayDat.thang,
                           list[found].ngayDat.nam);
                    printf("Tong tien: %.2lf\n", list[found].tongTien);
                    printf("Trang thai: %s\n", list[found].trangThai);
                }
                break;
            }

            case 0:
                printf("Thoat chuong trinh...\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}


