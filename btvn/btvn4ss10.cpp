#include<stdio.h>

int main(){
	int n ; 
	int arr[n];
	
	printf("Nhap so nguyen cua mang : ");
	scanf("%d",&n);
	
	for(int i = 0 ; i<n ; i++){
		printf("Nhap so thu % : ",i);
		scanf("%d",&arr[i]);
	}
	
	int temp ; 
	
	for(int i = 0 ; i<n ; i++){
		for (int j = 0 ; j < n - i - 1 ; j++){
			if(arr[j] > arr[j+1] ){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp ; 
			}
			
		}
	}
	
	printf("Mang sau khi sap xep theo thu tu tang dan la \n ");
	for (int i = 0 ; i < n ; i++){
		printf(" %d ",arr[i]);
	}
	
	
	printf("\n");
	
	
	return 0 ; 
}
