#include<stdio.h>

int main(){
	int  choice  ; 
	float a , b ;  
	
	printf("nhap so thu nhat : ");
	scanf ("%f",&a ); 
	
	printf("nhap so thu hai : ");
	scanf("%f",&b);
	
	do{
		printf("\n=======MENU=======\n");
		printf("1. Tong hai so \n ");
		printf("2. Hieu hai so \n");
		printf("3. Tich hai so \n");
		printf("4. Thuong hai so \n ");
		printf("5. Thoat \n "); 
		printf("Moi ban nhap ket qua o day : ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 : 
			  printf("Tong= %.2f\n", a + b  );
			  break ;  
			case 2 : 
			  printf("Hieu = %.2f\n", a-b); 
			  break ;  
			case 3 :
			  printf("Tich = %.2f\n", a * b);
			  break ;
			case 4 : 
			  printf("Thuong = %.2f\n ", a / b );
			  break ; 
			case 5 : 
			  printf("Ban da thoat chuong trinh \n ");
			  break ;  
			default : 
			  printf("Moi ban nhap lai ! \n ") ; 
			
			
			 	
			  
		}    
	}while (choice != 5 ) ; 
	
	return 0 ;  
	
} 
