#include<stdio.h>
void average (int *arr , int n , float *result){
	float sum = 0 ; 
	
	for (int i = 0 ; i < n ; i++){
		sum += *(arr+i);
	}
	*result = sum / n ; 
}
int main(){
	int n ; 
	int arr[n];
	printf("Nhap gia tri cua mang: ");
	scanf("%d",&n);
	
	for (int i = 0 ; i < n ; i++){
		printf("Nhap gia tri thu %d cua mang: ",i);
		scanf("%d",&arr[i]);
	}
	
	float soTrungBinh ;
    average (arr,n,&soTrungBinh);
	printf("Gia tri trung binh cua mang la: %.2f\n",soTrungBinh);
	return 0 ; 
}
