#include<stdio.h>

int totalArr(int arr[], int n ){
	int sum = 0 ; 
	for (int i = 0 ; i < n ; i++){
		sum +=arr[i]; 
	}
	return sum ;  
}
int main (){
	int n , arr[100];
	
	printf("Nhap so nguyen n cho gia tri cua mang: ");
	scanf("%d",&n);
	
	for (int i = 0 ; i < n ; i++){
		printf("Nhap phan tu thu %d cua mang:",i);
		scanf("%d",&arr[i]); 
	}
	
	
	
	int result = totalArr(arr,n);
	printf("Ket qua tong la: %d",result); 
	return 0 ;  
} 
