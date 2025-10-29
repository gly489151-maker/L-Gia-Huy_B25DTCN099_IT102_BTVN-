#include <stdio.h>

int main(){
	int a , b ,  bcnn ; 
	
	printf("Nhap a : ");
	scanf("%d",&a);
	
	printf("Nhap b : ");
	scanf("%d",&b); 
	
     for (int i = (a > b ? a : b); ; i++) {
        if (i % a == 0 && i % b == 0) {
            bcnn = i;
            break; // t?m th?y BCNN th? d?ng v?ng l?p
        }
    }
        printf("BCNN = %d\n", bcnn);
	  
	  return 0 ;  
} 
