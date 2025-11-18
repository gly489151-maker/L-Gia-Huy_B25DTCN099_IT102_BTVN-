#include<stdio.h>

void countEvenOdd(int *arr ,int n , int *even , int *odd ){
	*even = 0 ;
	*odd = 0 ; 
	for (int i = 0 ; i < n ; i++){
		if (*(arr+i) % 2 == 0 ){
			(*(even))++;
		}else {
			(*(odd))++;
		}
	}
}

int main (){
	int n ; 
	int arr[n];
	printf("Nhap gia tri phan tu cua mang: ");
	scanf("%d",&n);
	
	for (int i = 0 ; i < n ; i++){
		printf("Nhap gia tri thu %d cua mang la: ",i);
		scanf("%d",&arr[i]);
	}
	
	int evenCount , oddCount ; 
	countEvenOdd(arr,n,&evenCount,&oddCount);
	printf("So phan tu chan: %d\n",evenCount);
	printf("So phan tu le: %d\n",oddCount);
	return 0 ; 
}
