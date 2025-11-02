#include<stdio.h>

int main (){
	int arr[5]={1,2,3,4,5};
	int soChan = 0 ; 
	
	printf("Cac so trong mang la: %d %d %d  ");
	
	for (int i = 0 ; i <=5 ; i++){
		if (arr[i] % 2==0){
			printf("%d",arr[i]);
			soChan = 1 ; 
		}
	}
	
	if (soChan == 0){
		printf("\nMang k p so chan. ");
	}
	
	
	
	
	
	
	return 0 ; 
}
