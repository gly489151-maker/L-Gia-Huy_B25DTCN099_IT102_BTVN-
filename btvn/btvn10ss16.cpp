#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "PTIT";
    int freq[256] = {0}; 

    
    for (int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Chuoi: %s\n\n", str);
    printf("So lan xuat hien cua tung ky tu:\n");

    
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}

