#include <stdio.h> 

int main(){
	int years ; 
	printf(" yeu cau nguoi dung nhap 1 so nguyen dai dien cho nam : "); 
	scanf("%d",&years );
	
	if ((years % 4 == 0 && years % 100 != 0 ) || (years % 400 == 0 )){
		printf(" nam day la nam nhuan  ", years ); 
	}else {
		printf("nam day la nam khong nhuan ", years ); 
	}
	
	return 0 ;  
} 
