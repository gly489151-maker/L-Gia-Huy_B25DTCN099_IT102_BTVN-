#include<stdio.h>

int daoNguoc(int n ){ 
	int reserve = 0 ;
	int dau = 1 ; 
	if (n<0){
		dau = -1 ; 
		n = -n; 
	} 
	while (n!=0){
		reserve = reserve * 10 + n % 10 ; 
		n /= 10 ;  
	}
	return reserve * dau ; 
} 

int main (){
	int so ; 
	printf("Nhap so can dao nguoc : ");
	scanf("%d",&so);
	
	int result = daoNguoc(so);
	printf("ket qua cua dao nguoc la: %d",result); 
} 
