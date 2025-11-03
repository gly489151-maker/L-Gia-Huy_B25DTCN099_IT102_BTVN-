#include<stdio.h>

int main(){
	int n ; 
	int arr[n];
	int soChan = 0 ; 
	int soLe = 0 ;  
	printf("nhap so nguyen cua mang:");
	scanf("%d",&n);
	
	for (int i = 0 ; i < n ; i++){
		printf("\nMang cua thu %d :",i);
		scanf("%d",&arr[i]);  
	} 
	
    for (int i = 0 ; i < n ; i++){
    	if(arr[i] % 2 == 0){
    		soChan++; 
		}else {
			soLe++; 
		} 
	} 
	
	
	printf("\nSo chan la :%d",soChan);
	printf("\nSo le la :%d\n",soLe); 
	

	
	 
	
	return 0 ;  
} 
