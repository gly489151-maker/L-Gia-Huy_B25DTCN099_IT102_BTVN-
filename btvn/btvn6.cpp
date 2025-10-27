#include <stdio.h>

int main(){
	int number_01 , number_02 , result ; 
	long tien ;  
	printf("nhap so dien cu : ") ; 
	scanf("%d", &number_01); 
	
	printf("nhap so dien moi : ") ; 
	scanf("%d",&number_02 ) ; 
	
	// tinh tien dien cua ham da khai bao 
	
	result = number_02 - number_01 ; 
	
	printf("so dien tieu thu la : %d ", result ); 
	
	// tinh tien dien hang thang bang if 
	
	if (0<=result< 50 ){
		tien = result * 10000 ;  
	}else if (50<=result<100){
		tien = result * 15000 ;  
	}else if (100<=result<150){
		tien = result * 20000 ;  
	}else if ( 150<= result < 200 ){
		tien = result * 25000 ;  
	
	}else {
		tien = result * 30000 ;  
	}
	
	 printf("Tien dien phai tra: %ld VND\n", tien); 
	
	
	
	
	
	
	return 0 ;  
} 
