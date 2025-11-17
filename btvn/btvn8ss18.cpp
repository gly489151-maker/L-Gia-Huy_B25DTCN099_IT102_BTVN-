#include <stdio.h>
#include <string.h>

int main(){
    char inputString[100];
    char reverseString[100];

    gets(inputString);

    int len = strlen(inputString);
    char *p1 = inputString;
    char *p2 = reverseString;

    for(int i = 0; i < len; i++){
        *(p2 + i) = *(p1 + (len - 1 - i));
    }
    reverseString[len] = '\0';

    printf("Input: %s\n", inputString);
    printf("Reverse: %s\n", reverseString);

    return 0;
}

