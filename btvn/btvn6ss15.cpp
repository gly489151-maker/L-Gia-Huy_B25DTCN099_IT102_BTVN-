#include<stdio.h>


void bubbleSort(int arr[] , int n ){
	for (int i = 0 ; i < n - 1 ; i++){
		for (int j = 0 ; j < n - i -1 ; j++){
			int temp ;
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp ;  
			} 
		} 
	} 
} 

void inMang (int arr[] , int n ){
	for (int i = 0 ; i < n ; i++){
		printf("%d", arr[i]);
		 
	}
	printf("\n");
	 
} 




int main(){
	int n ; 
	int arr[n];
	
	printf("Nhap gia tri cua mang: ");
	scanf("%d",&n);
	
	for(int i = 0 ; i < n ; i++){
		printf("Nhap so thu %d cua mang: ",i);
		scanf("%d",&arr[i]); 
	}
	
	printf("mang truoc khi sap xep la: \n");
	inMang(arr,n);
	
	 
	bubbleSort(arr,n);
	
	printf("Mang sau khi sap xep la: \n");
	inMang(arr,n);
	
	
	
	
	
	
	
	
	
	 
	return 0 ;  
} 
