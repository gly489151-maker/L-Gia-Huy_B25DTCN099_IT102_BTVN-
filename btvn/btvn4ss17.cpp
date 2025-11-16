#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    
    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);
    
   
    str[strcspn(str, "\n")] = '\0';
    
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);

    int i, j = 0;
    char result[100];

    
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ch) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, result);

    return 0;
}

