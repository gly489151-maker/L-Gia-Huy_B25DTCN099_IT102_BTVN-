#include <stdio.h>

int main (){
	float chieudai , chieurong ; 
	float dientich ;  
	
	printf("nhap do dai chieudai : ") ;
	scanf("%f", &chieudai ); 
	printf("nhap do dai chieu rong : ") ; 
	scanf("%f", &chieurong); 
	// cong thuc tinh do dai 
	
	dientich= chieudai * chieurong ; 
	
	printf("dien t�ch l� %2f ", dientich ) ; 
	
	return 0 ;  
} 
