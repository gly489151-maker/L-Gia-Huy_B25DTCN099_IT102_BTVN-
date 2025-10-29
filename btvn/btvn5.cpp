#include <stdio.h>

int main (){
	int a , b ;
	
	
	printf("nhap so nguyen duong a "); 
	scanf("%d",&a );
	
    printf("nhap so nguyen duong b : "); 
	scanf("%d",&b );
	
	int ucln = 1  ; 
	int min = (a < b ) ? a : b ;
	
	for ( int i = 1 ; i <= min ; i++ ){
		if ( a % i ==0 && b % i == 0 )
		  ucln = i ;  
	} 
	
	printf ("ucln cua %d va %d la : %d\n", a , b , ucln );
	
	return 0 ;  
} 
