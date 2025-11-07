#include <stdio.h>
#include <string.h>

int main() {
    
    char arr[5][20] = {"apple", "banana", "orange", "mango", "grape"};
    int n = 5;

    
    char target[20];
    printf("Nhap chuoi can tim: ");
    scanf("%s", target);

    
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i], target) == 0) { 
            found = i;
            break;
        }
    }

    
    if (found != -1) {
        printf("Chuoi \"%s\" duoc tim thay tai vi tri %d.\n", target, found);
    } else {
        printf("Khong tim thay chuoi \"%s\" trong mang.\n", target);
    }

    return 0;
}

