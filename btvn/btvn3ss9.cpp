#include <stdio.h>

int main (){
	int n ;  
	int arr[n];
	
	printf("Nhap so phan tu cua mang:");
	scanf("%d",&n);
	int i ;  
	for( i = 0 ; i<n; i++){
		printf("Nhap so phan tu thu %d : ",i);
		scanf("%d",&arr[i]); 
	} 
	printf("cac phan tu trong mang la:\n"); 
	for (i = 0 ; i < n ; i++){
		printf(" %d ",arr[i]); 
	}
	
	return 0 ;  
} 
