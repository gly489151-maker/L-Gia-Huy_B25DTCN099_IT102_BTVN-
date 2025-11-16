#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pass[200];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Nhap mat khau: ");
    fgets(pass, sizeof(pass), stdin);

    
    pass[strcspn(pass, "\n")] = '\0';

    
    if (strlen(pass) < 8) {
        printf("Khong hop le\n");
        return 0;
    }

    
    for (int i = 0; pass[i] != '\0'; i++) {
        if (isupper(pass[i])) hasUpper = 1;
        else if (islower(pass[i])) hasLower = 1;
        else if (isdigit(pass[i])) hasDigit = 1;
        else hasSpecial = 1;  
    }

    
    if (hasUpper && hasLower && hasDigit && hasSpecial)
        printf("Hop le\n");
    else
        printf("Khong hop le\n");

    return 0;
}

