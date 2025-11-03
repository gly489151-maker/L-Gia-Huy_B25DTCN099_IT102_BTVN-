#include<stdio.h>

int main (){
	int n ;
	int arr[n] ;
	int x ;  
	int look = 0 ;  
	printf("Nhap so nguyen cua mang :");
	scanf("%d",&n);
	
	for(int i = 0 ; i < n ; i++){
		printf("Nhap so thu %d :",i);
		scanf("%d",&arr[i]); 
	} 
	printf("-----------------------\n"); 
	printf("Gia tri cua x : ");
	scanf("%d",&x); 
	 
	for(int i = 0 ; i < n ; i++){
		if(arr[i] == x ){
			printf("Gia tri %d duoc tim thay tai vi tri thu %d\n",x , i+1 );
			look = 1; 
		} 
	} 
	
	if (!look ){
		printf("Gia tri %d khong ton tai trong mang\n",x); 
	} 
	
	return 0 ; 
} 
