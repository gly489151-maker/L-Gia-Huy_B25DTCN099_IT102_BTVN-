#include<stdio.h>

int main (){
	int chieuDai , chieuRong ; 
	
	printf("Nhap so chieu dai : ");
	scanf("%d",&chieuDai);
	
	printf("Nhap so chieu rong : ");
	scanf("%d",&chieuRong);
	
	for ( int i = 1 ; i <= chieuDai ; i++){
		for (int j = 1 ; j <=chieuRong ; j ++ ){
			printf("*"); 
		} 
		printf("\n"); 
	} 
	
	
	
	
	
	
	return 0 ; 
} 
