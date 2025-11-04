#include<stdio.h>

int main(){
	int n ;
	int arr[n];
	
	printf("Nhap so nguyen cua mang : ");
	scanf("%d",&n);
	
	for (int i = 0 ; i < n ; i++){
		printf("Nhap so thu %d :",i);
		scanf("%d",&arr[i]); 
	} 
	
	int value ; 
	int count = 0 ; 
	
	printf("Nhap so can tim la :");
	scanf("%d",&value); 
	for (int i ; i < n ; i++){
		if ( arr[i] == value ){
			count ++ ;  
		} 
	}
	
	if(count > 0 ){
		printf("%d",count); 
	}else{
		printf("Khong tim thay\n");
	} 
	
	
	
	return 0 ;  
}
