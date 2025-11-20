#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    float price;
};

void inputBooks(struct Book books[], int *n) {
    printf("Nhap so luong sach: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++) {
        printf("\nSach %d:\n", i + 1);
        getchar();
        printf("Ma sach: ");
        scanf("%d", &books[i].id);
        getchar();

        printf("Ten sach: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';

        printf("Tac gia: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Gia: ");
        scanf("%f", &books[i].price);
    }
}

void displayBooks(struct Book books[], int n) {
    if (n == 0) {
        printf("Danh sach rong!\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("\nSach %d:\n", i + 1);
        printf("ID: %d\n", books[i].id);
        printf("Ten: %s\n", books[i].title);
        printf("Tac gia: %s\n", books[i].author);
        printf("Gia: %.2f\n", books[i].price);
    }
}

void addBookAt(struct Book books[], int *n) {
    int pos;
    printf("Nhap vi tri muon chen (0 - %d): ", *n);
    scanf("%d", &pos);

    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int i = *n; i > pos; i--) {
        books[i] = books[i - 1];
    }

    getchar();
    printf("Nhap thong tin sach moi:\n");

    printf("Ma sach: ");
    scanf("%d", &books[pos].id);
    getchar();

    printf("Ten sach: ");
    fgets(books[pos].title, sizeof(books[pos].title), stdin);
    books[pos].title[strcspn(books[pos].title, "\n")] = '\0';

    printf("Tac gia: ");
    fgets(books[pos].author, sizeof(books[pos].author), stdin);
    books[pos].author[strcspn(books[pos].author, "\n")] = '\0';

    printf("Gia: ");
    scanf("%f", &books[pos].price);

    (*n)++;
}

void deleteBookByID(struct Book books[], int *n) {
    int id, found = -1;
    printf("Nhap ID sach can xoa: ");
    scanf("%d", &id);

    for (int i = 0; i < *n; i++) {
        if (books[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Khong tim thay sach!\n");
        return;
    }

    for (int i = found; i < *n - 1; i++) {
        books[i] = books[i + 1];
    }

    (*n)--;
    printf("Da xoa thanh cong!\n");
}

void updateBookByID(struct Book books[], int n) {
    int id, found = -1;
    printf("Nhap ID sach can cap nhat: ");
    scanf("%d", &id);

    for (int i = 0; i < n; i++) {
        if (books[i].id == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Khong tim thay sach!\n");
        return;
    }

    getchar();
    printf("Ten sach moi: ");
    fgets(books[found].title, sizeof(books[found].title), stdin);
    books[found].title[strcspn(books[found].title, "\n")] = '\0';

    printf("Tac gia moi: ");
    fgets(books[found].author, sizeof(books[found].author), stdin);
    books[found].author[strcspn(books[found].author, "\n")] = '\0';

    printf("Gia moi: ");
    scanf("%f", &books[found].price);

    printf("Cap nhat thanh cong!\n");
}

void sortBooks(struct Book books[], int n) {
    int choice;
    printf("1. Tang dan\n2. Giam dan\nChon: ");
    scanf("%d", &choice);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int cond = (choice == 1) ? (books[i].price > books[j].price)
                                     : (books[i].price < books[j].price);

            if (cond) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }

    printf("Sap xep thanh cong!\n");
}

void searchBookByName(struct Book books[], int n) {
    char name[100];
    getchar();
    printf("Nhap ten sach can tim: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].title, name) == 0) {
            printf("\nTim thay sach:\n");
            printf("ID: %d\n", books[i].id);
            printf("Ten: %s\n", books[i].title);
            printf("Tac gia: %s\n", books[i].author);
            printf("Gia: %.2f\n", books[i].price);
            return;
        }
    }

    printf("Khong tim thay!\n");
}

int main() {
    struct Book books[100];
    int n = 0, choice;

    do {
        printf("\n====== MENU ======\n");
        printf("1. Nhap danh sach sach\n");
        printf("2. Hien thi danh sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ID\n");
        printf("5. Cap nhat sach theo ID\n");
        printf("6. Sap xep sach theo gia\n");
        printf("7. Tim sach theo ten\n");
        printf("8. Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: inputBooks(books, &n); break;
            case 2: displayBooks(books, n); break;
            case 3: addBookAt(books, &n); break;
            case 4: deleteBookByID(books, &n); break;
            case 5: updateBookByID(books, n); break;
            case 6: sortBooks(books, n); break;
            case 7: searchBookByName(books, n); break;
            case 8: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 8);

    return 0;
}

