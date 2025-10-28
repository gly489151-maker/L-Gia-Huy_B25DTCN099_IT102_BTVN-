#include <stdio.h>

int main() {
    float a, b;
    char op; // khai bao toan tu  

    // in 2 so thuc ra  
    printf("Nhap vao so thuc a: ");
    scanf("%f", &a);

    printf("Nhap vao so thuc b: ");
    scanf("%f", &b);

    // nhap toan tu  
    printf("Nhap vao mot toan tu (+, -, *, /): ");
    
    scanf(" %c", &op); 

    //su dung switch case  
    switch (op) {
        case '+':
            printf("Ket qua: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("Ket qua: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("Ket qua: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Loi: Khong the chia cho 0\n");
            } else {
                printf("Ket qua: %.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        default:
            // Quy tac xu li toan tu k hop le  
            printf("Loi: Toan tu khong hop le\n");
            break;
    }

    return 0;
}
