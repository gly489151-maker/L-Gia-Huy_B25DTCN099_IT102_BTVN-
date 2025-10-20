#include <stdio.h>

int main(){
	int  n , a , b , c , d , tong ; 
	printf("nhap so nguyen bat ki : ") ; 
	scanf("%d",&n);
	a=(n/1000) ; 
	b=(n/100) % 10  ; 
	c=(n/10) % 10  ; 
	d=n%10 ; 
			
	tong = a + b + c + d ; // tinh tong abcd 
	
	printf("tong cac chu so cua  %d\n la : %d ", n , tong ) ; 
	
	return 0 ;  
	 

	
	 
} 
