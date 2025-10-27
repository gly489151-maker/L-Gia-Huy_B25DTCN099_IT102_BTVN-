#include <stdio.h>

int main(){
	int n ;
	printf("nhap so bat ki : "); 
	scanf("%d",&n);
	
	if (n%3==0){
		printf("so tren chia het cho 3 "); 
	} 
	if (n%5==0){
		printf("so tren chia het cho 5 "); 
	}
	if (n%3==0 && n%5==0){
		printf("so tren chia het cho ca 3 va 5 "); 
	} 
 
	
	return 0 ;  
} 
