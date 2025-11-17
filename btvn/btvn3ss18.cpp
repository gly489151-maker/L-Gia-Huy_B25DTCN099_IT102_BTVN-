#include<stdio.h>

void sum(int *a , int *b , int *result1 ){
	*result1 = *a + *b ;  
} 

int main(){
	int a = 10 ; 
	int b = 10 ; 
	int result ; 
	
	sum(&a , &b , &result );
	printf("Ket qua cua phep tinh cong la = %d\n",result); 
	

	
	return 0 ;  
} 
