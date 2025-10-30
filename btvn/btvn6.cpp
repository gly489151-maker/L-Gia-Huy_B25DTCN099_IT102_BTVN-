#include<stdio.h>

int main (){
	int n , reserved  = 0 , digit  ; 
	
	printf("nhap so nguyen n : ");
	scanf("%d",&n);
	
	while (n!= 0 ){
		digit = n % 10 ; 
		reserved = reserved * 10 + digit ; 
		n = n / 10 ;  
	}
	 printf("So dao nguocla : %d",reserved);
	 return 0 ;  
} 
