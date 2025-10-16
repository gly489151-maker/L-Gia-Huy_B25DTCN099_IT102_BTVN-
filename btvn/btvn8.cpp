#include <stdio.h>

int main() {
    int number = 12345;
    int result = 0;
    int digit;

    while (number > 0) {
        digit = number % 10;         // lay chu so cuoi  
        result = result * 10 + digit; // ghep vao ket qua  
        number = number / 10;         // bo chu so cuoi  
    }

    printf("So dao nguoc la: %d\n", result);

    return 0;
}
