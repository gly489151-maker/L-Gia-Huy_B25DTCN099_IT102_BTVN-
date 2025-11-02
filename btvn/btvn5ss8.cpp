#include<stdio.h>

int main(){
	int n ; 
	printf("Nhap so nguyen n :");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i = 0 ; i < n ; i++ ){
		printf("Nhap phan tu %d:",i);
		scanf("%d",&arr[i]); 
	}
	
	int max = arr[0];
	int min = arr[0]; 
	
	for(int i = 1 ; i<n ; i++){
		if (arr[i] > max ){
			max = arr[i];}
		if (arr[i]<min ){
			min = arr[i]; 
		}  
		} 
		
		
		printf("So lon nhat : %d\n",max);
		printf("So nho nhat : %d ", min ); 
		return 0 ;  
	}
	
	


