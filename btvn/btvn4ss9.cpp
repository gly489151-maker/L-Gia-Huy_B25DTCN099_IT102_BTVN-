#include<stdio.h>

int main (){
	int n ; 
	int arr[n];
	float resualt ; 
	float  sum = 0  ;  
	
	printf("Nhap so nguyen cua mang :");
	scanf("%d",&n);
	
	
	for (int i = 0 ; i < n ; i++){
		printf("Nhap so nguyen thu %d : ",i);
		scanf("%d",&arr[i]); 	
	} 
	
	printf("-----------------------------\n"); 
	
	 
	
	for (int i = 0 ; i < n ; i++){
		sum += arr[i]; 
	}
		
	resualt = sum / n ; 
	
	printf("So trung binh cong cua mang la :%.2f",resualt);	
	 
	
	
	
	
	
	
	
	return 0 ;  
} 
