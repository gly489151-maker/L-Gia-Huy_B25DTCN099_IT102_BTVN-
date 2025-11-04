#include<stdio.h>

int main(){
	int n ; 
	int arr[n];
	
	printf("Nhap so thu tu cua mang : ");
	scanf("%d",&n);
	
	for(int i = 0 ; i < n ; i++){
		printf("Nhap so thu %d : ",i);
		scanf("%d",&arr[i]);
		
	}
	
	printf("\n-------------------\n");
	
	int x ; 
	int look = 0 ; 
	
	printf("Nhap so nguyen x : ");
	scanf("%d",&x);
	
	for (int i = 0 ; i < n ; i++){
		if (arr[i] == x ){
			printf("Tim thay %d tai gia tri thu %d\n", x , i );
			look++; 
		}
	}
	
	if(!look){
		printf("Khong tim thay gia tri %d trong mang\n",x);
	}
	
	
	
	
	return 0 ; 
}
