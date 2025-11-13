#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "HOC VIEN CONG NGHE BUU CHINH VIEN THONG";
    char ch;
    int i, j;

    printf("Chuoi ban dau: %s\n", str);

    printf("Nhap ky tu muon xoa: ");
    scanf("%s", &ch);

    
    for (i = 0, j = 0; i < strlen(str); i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Chuoi sau khi xoa %c: %s\n", ch, str);

    return 0;
}

