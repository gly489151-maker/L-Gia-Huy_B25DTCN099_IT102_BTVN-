#include<stdio.h>

int main(){
	int n ; 
	int arr[n];
	
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	
	for (int i = 0 ; i < n ; i++){
		do{
			printf("Nhap so phan tu thu %d : ",i);
			scanf("%d",&arr[i]);
			
			if(arr[i] % 2 == 0 ){
				printf("Gia tri vua nhap la so chan . Vui long nhap lai :\n");
				 
			} 
		}while(arr[i] % 2 == 0 );
	}
	
	printf("\nMang cac so le vua nhap la : ");
	for (int i = 0 ; i < n ; i++){
		printf("%d",arr[i]); 
	} 
	
	return 0 ;  
} 
	
	
	

