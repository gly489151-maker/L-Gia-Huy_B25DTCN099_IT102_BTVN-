#include<stdio.h>

int main (){
	int n ; 
	
	printf("Nhap so nguyen :");
	scanf("%d",&n);
	
	int arr[n];
	
	for (int i = 0 ; i <n ; i++){
		 printf("Nhap phan tu thu %d: ", i );
        scanf("%d", &arr[i]);
		
	}
	printf("Mang vua nhap : ");
	for (int i = 0 ; i<n ; i++ ){
		printf("%d",arr[i]);
	}
	
	
	
	
	
	
	return 0 ; 
}
