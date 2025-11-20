#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student list[50];
    int count = 5;

    strcpy(list[0].name, "Nguyen Van A");
    list[0].age = 20; strcpy(list[0].phoneNumber, "0123456789"); list[0].id = 1;

    strcpy(list[1].name, "Tran Thi B");
    list[1].age = 19; strcpy(list[1].phoneNumber, "0987654321"); list[1].id = 2;

    strcpy(list[2].name, "Le Van C");
    list[2].age = 21; strcpy(list[2].phoneNumber, "0111222333"); list[2].id = 3;

    strcpy(list[3].name, "Pham Thi D");
    list[3].age = 22; strcpy(list[3].phoneNumber, "0333444555"); list[3].id = 4;

    strcpy(list[4].name, "Hoang Van E");
    list[4].age = 20; strcpy(list[4].phoneNumber, "0777888999"); list[4].id = 5;

    int deleteId;
    printf("Nhap id sinh vien can xoa: ");
    scanf("%d", &deleteId);

    int index = -1;
    for (int i = 0; i < count; i++) {
        if (list[i].id == deleteId) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Khong ton tai sinh vien.\n");
    } else {
        for (int i = index; i < count - 1; i++) {
            list[i] = list[i + 1];
        }
        count--;
    }

    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("%d - %s - %d - %s\n",
               list[i].id, list[i].name, list[i].age, list[i].phoneNumber);
    }

    return 0;
}

