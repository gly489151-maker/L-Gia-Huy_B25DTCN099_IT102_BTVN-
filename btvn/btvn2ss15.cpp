#include<stdio.h>

int tongChuSo(int n ){
	int sum = 0 ;
	if ( n < 0 ){
		n = -n; 
	}
	while (n !=0 ){
		sum  += n % 10 ;
		n /= 10 ;  
	} 
	return sum ;  
} 

int main(){
	int so ; 
	printf("Nhap so nguyen bat ki: ");
	scanf("%d",&so);
	int result = tongChuSo(so); 
	printf("Tong cua chu so nguyen %d la: %d", so , result);
	return 0 ; 
} 
