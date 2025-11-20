#include <stdio.h>
#include <string.h>

struct Dish {
    int id;
    char name[50];
    float price;
};

int main() {
    struct Dish menu[100];
    int count = 5;

    menu[0].id = 1; strcpy(menu[0].name, "Pho"); menu[0].price = 30000;
    menu[1].id = 2; strcpy(menu[1].name, "Bun bo"); menu[1].price = 40000;
    menu[2].id = 3; strcpy(menu[2].name, "Com tam"); menu[2].price = 35000;
    menu[3].id = 4; strcpy(menu[3].name, "Mi xao"); menu[3].price = 45000;
    menu[4].id = 5; strcpy(menu[4].name, "Banh canh"); menu[4].price = 25000;

    int choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. In danh sach\n");
        printf("2. Chen theo vi tri\n");
        printf("3. Sua theo vi tri\n");
        printf("4. Xoa theo vi tri\n");
        printf("5. Sap xep theo price\n");
        printf("6. Tim kiem theo name\n");
        printf("7. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            for (int i = 0; i < count; i++) {
                printf("%d. %s - %.2f\n", menu[i].id, menu[i].name, menu[i].price);
            }
        }

        else if (choice == 2) {
            int pos;
            printf("Nhap vi tri chen: ");
            scanf("%d", &pos);

            if (pos < 0 || pos > count) {
                printf("Vi tri khong hop le\n");
                continue;
            }

            struct Dish newDish;
            newDish.id = count + 1;

            fflush(stdin);
            printf("Nhap ten: ");
            fgets(newDish.name, 50, stdin);
            newDish.name[strcspn(newDish.name, "\n")] = '\0';

            printf("Nhap gia: ");
            scanf("%f", &newDish.price);

            for (int i = count; i > pos; i--) {
                menu[i] = menu[i - 1];
            }

            menu[pos] = newDish;
            count++;

        }

        else if (choice == 3) {
            int pos;
            printf("Nhap vi tri sua: ");
            scanf("%d", &pos);

            if (pos < 0 || pos >= count) {
                printf("Vi tri khong hop le\n");
                continue;
            }

            fflush(stdin);
            printf("Nhap ten moi: ");
            fgets(menu[pos].name, 50, stdin);
            menu[pos].name[strcspn(menu[pos].name, "\n")] = '\0';

            printf("Nhap gia moi: ");
            scanf("%f", &menu[pos].price);
        }

        else if (choice == 4) {
            int pos;
            printf("Nhap vi tri xoa: ");
            scanf("%d", &pos);

            if (pos < 0 || pos >= count) {
                printf("Vi tri khong hop le\n");
                continue;
            }

            for (int i = pos; i < count - 1; i++) {
                menu[i] = menu[i + 1];
            }

            count--;
        }

        else if (choice == 5) {
            char opt;
            printf("a. Giam dan theo price\n");
            printf("b. Tang dan theo price\n");
            printf("Chon: ");
            fflush(stdin);
            scanf("%c", &opt);

            if (opt == 'a') {
                for (int i = 0; i < count - 1; i++) {
                    for (int j = i + 1; j < count; j++) {
                        if (menu[i].price < menu[j].price) {
                            struct Dish tmp = menu[i];
                            menu[i] = menu[j];
                            menu[j] = tmp;
                        }
                    }
                }
            }

            else if (opt == 'b') {
                for (int i = 0; i < count - 1; i++) {
                    for (int j = i + 1; j < count; j++) {
                        if (menu[i].price > menu[j].price) {
                            struct Dish tmp = menu[i];
                            menu[i] = menu[j];
                            menu[j] = tmp;
                        }
                    }
                }
            }

            else printf("Lua chon khong hop le\n");
        }

        else if (choice == 6) {
            char opt;
            printf("a. Tuyet tinh\n");
            printf("b. Nhi phan\n");
            printf("Chon: ");
            fflush(stdin);
            scanf("%c", &opt);

            fflush(stdin);
            char key[50];
            printf("Nhap ten can tim: ");
            fgets(key, 50, stdin);
            key[strcspn(key, "\n")] = '\0';

            if (opt == 'a') {
                int found = 0;
                for (int i = 0; i < count; i++) {
                    if (strcmp(menu[i].name, key) == 0) {
                        printf("Tim thay: %d - %s - %.2f\n", menu[i].id, menu[i].name, menu[i].price);
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Khong tim thay\n");
            }

            else if (opt == 'b') {
                for (int i = 0; i < count - 1; i++) {
                    for (int j = i + 1; j < count; j++) {
                        if (strcmp(menu[i].name, menu[j].name) > 0) {
                            struct Dish tmp = menu[i];
                            menu[i] = menu[j];
                            menu[j] = tmp;
                        }
                    }
                }

                int left = 0, right = count - 1, found = 0;
                while (left <= right) {
                    int mid = (left + right) / 2;
                    int cmp = strcmp(menu[mid].name, key);

                    if (cmp == 0) {
                        printf("Tim thay: %d - %s - %.2f\n", menu[mid].id, menu[mid].name, menu[mid].price);
                        found = 1;
                        break;
                    }

                    if (cmp < 0) left = mid + 1;
                    else right = mid - 1;
                }

                if (!found) printf("Khong tim thay\n");
            }

            else printf("Lua chon khong hop le\n");
        }

        else if (choice == 7) {
            break;
        }

        else {
            printf("Lua chon khong hop le\n");
        }
    }

    return 0;
}

