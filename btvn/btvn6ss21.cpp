#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void findStudent(struct Student students[], int size, char key[]) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, key) == 0) {
            printf("\nThong tin hoc sinh tim thay:\n");
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("Diem trung binh: %.2f\n", students[i].grade);
            return;
        }
    }
    printf("\nKhong tim thay hoc sinh ten %s\n", key);
}

int main() {
    struct Student students[5];
    char key[50];

    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin hoc sinh %d:\n", i + 1);

        getchar();
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Tuoi: ");
        scanf("%d", &students[i].age);

        printf("Diem trung binh: ");
        scanf("%f", &students[i].grade);
    }

    getchar();
    printf("\nNhap ten hoc sinh can tim: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    findStudent(students, 5, key);

    return 0;
}

