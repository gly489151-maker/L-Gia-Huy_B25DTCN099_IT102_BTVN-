#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200] = "Hello my gmail is gly489151@gmail.com ";
    int letter = 0, digit = 0, special = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            letter++; // Ð?m ch? cái
        } else if (isdigit(str[i])) {
            digit++; // Ð?m ch? s?
        } else if (!isspace(str[i])) {
            special++; // Ð?m k? t? ð?c bi?t (không ph?i ch?, không ph?i s?, không ph?i kho?ng tr?ng)
        }
    }

    printf("Chuoi: %s\n", str);
    printf("So ky tu la chu cai: %d\n", letter);
    printf("So ky tu la chu so: %d\n", digit);
    printf("So ky tu dac biet: %d\n", special);

    return 0;
}

