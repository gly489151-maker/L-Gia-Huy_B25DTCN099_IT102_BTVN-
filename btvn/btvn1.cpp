#include <stdio.h>

int main (){
	int n ;  
	int tong = 0 ; 
	
	printf (" Nhap N =  ");
	scanf ("%d",&n);  
	
	for (int i = 1 ; i <= n ; i ++ ){
		tong += i ; // tong = tong + 1  
	}
	 printf ( " ket qua la : %d\n", tong ) ;
	 return 0 ;  
} 
