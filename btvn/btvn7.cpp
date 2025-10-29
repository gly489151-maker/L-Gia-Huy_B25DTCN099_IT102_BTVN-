#include <stdio.h>

int main (){
    int a, b, c, choice;

    do {
        printf("\n====Bang lua chon====\n");
        printf("1. Nhap 3 so nguyen\n");
        printf("2. Tinh tong 3 so\n");
        printf("3. Tinh trung binh cong 3 so\n");
        printf("4. Tim so nho nhat\n");
        printf("5. Tim so lon nhat\n");
        printf("6. Thoat chuong trinh\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap a: ");
                scanf("%d", &a);
                printf("Nhap b: ");
                scanf("%d", &b);
                printf("Nhap c: ");
                scanf("%d", &c);
                break;

            case 2:
                printf("Tong = %d\n", a + b + c);
                break;

            case 3:
                printf("Trung binh cong = %.2f\n", (a + b + c) / 3.0);
                break;

            case 4: {
                int min = a;
                if(min > b) min = b;
                if(min > c) min = c;
                printf("So nho nhat = %d\n", min);
                break;
            }

            case 5: {
                int max = a;
                if(max < b) max = b;
                if(max < c) max = c;
                printf("So lon nhat = %d\n", max);
                break;
            }

            case 6:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }

    } while(choice != 6);

    return 0;
}
		 
	     
	    	
		
			
			
	
		

  
