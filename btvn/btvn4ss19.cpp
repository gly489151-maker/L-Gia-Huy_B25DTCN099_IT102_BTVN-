#include<stdio.h>

int countValue (int n , int *arr , int x ){
	int count = 0 ;
	for (int i = 0 ; i < n ; i++){
		if (*(arr+i)==x){
			count++;
		}
	}
	return count ;
}

int main (){
	int n ; 
	
	printf("Nhap gia tri cua mang: ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		printf("Nhap gia tri thu %d cua mang: ",i);
		scanf("%d",&arr[i]);
	}
	
	int x ; 
	printf("Nhap gia tri can tim: ");
	scanf("%d",&x);
	
	int result = countValue (n,arr,x);
	printf("so lan xuat hien cua phan tu %d la: %d\n",x,result);
	return 0 ; 
}
