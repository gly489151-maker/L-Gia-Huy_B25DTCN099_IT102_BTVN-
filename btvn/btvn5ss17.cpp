#include <stdio.h>
#include<string.h> 

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0, flag = 1;

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    while(str1[i] != '\0' && str2[i] != '\0') {
        char c1 = str1[i];
        char c2 = str2[i];

        if(c1 >= 'A' && c1 <= 'Z') c1 = c1 + 32;
        if(c2 >= 'A' && c2 <= 'Z') c2 = c2 + 32;

        if(c1 != c2) {
            flag = 0;
            break;
        }
        i++;
    }

    if(str1[i] != '\0' || str2[i] != '\0') flag = 0;

    if(flag) {
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }

    return 0;
}

