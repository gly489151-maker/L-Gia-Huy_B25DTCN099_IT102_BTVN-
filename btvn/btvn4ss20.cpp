#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[16];
};

int main() {
    struct Student st[50];  
    int numberOfStudents = 5;

    printf("===== NHAP THONG TIN 5 SINH VIEN =====\n");

    for (int i = 0; i < numberOfStudents; i++) {
        st[i].id = i + 1; // id t? tãng

        printf("\n--- Sinh vien thu %d ---\n", i + 1);

        printf("Nhap ten: ");
        fgets(st[i].name, sizeof(st[i].name), stdin);
        st[i].name[strcspn(st[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &st[i].age);
        getchar(); // b? k? t? Enter

        printf("Nhap so dien thoai: ");
        fgets(st[i].phoneNumber, sizeof(st[i].phoneNumber), stdin);
        st[i].phoneNumber[strcspn(st[i].phoneNumber, "\n")] = '\0';
    }

    printf("\n===== DANH SACH SINH VIEN PTIT =====\n");

    for (int i = 0; i < numberOfStudents; i++) {
        printf("ID: %d | Ten: %s | Tuoi: %d | SDT: %s\n",
               st[i].id,
               st[i].name,
               st[i].age,
               st[i].phoneNumber);
    }

    return 0;
}

