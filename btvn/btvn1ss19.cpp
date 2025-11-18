#include<stdio.h>

int findMax(int *arr , int n ){
	int max = *arr;
	for (int i = 0 ; i < n ; i++){
		if(*(arr + i ) > max ){
			max = *(arr+i);
		}
	}
	return max ; 
}

int main (){
	int n ; 
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	
	int arr[n];
	for ( int i = 0 ; i < n ; i++){
		printf("Nhap so thu %d trong mang la: ",i);
		scanf("%d",&arr[i]);
	}
	int max =  findMax(arr,n);
	printf("Phan tu lon nhat la: %d\n",max);
	
	return 0 ; 
}
