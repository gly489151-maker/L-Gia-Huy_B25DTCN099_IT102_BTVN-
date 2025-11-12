#include<stdio.h>

int binarySearch(int arr[], int n , int x ){
	int left = 0 ;
	int right = n - 1 ; 
	
	while (left <= right){
		int mid ; 
		mid = (left + right) / 2 ; 
		if(arr[mid] == x ){
			return mid ; // khi tim thay va tra ve gia tri can tim 
		}else if (arr[mid] < x){
			left = mid + 1 ; // dung de tim ben trai 
		}else {
			right = mid - 1 ; // dung de tim ben phai 
		}
	}
	return -1 ; // khong tim thay gia tri nao trong mang khi nhap 
}



int main(){
	int n ; 
	int arr[100];
	int x ; 
	printf("Nhap gia tri cua mang: ");
	scanf("%d",&n);
	
	printf("Nhap cac phan tu da sap xep tang dan :\n");
	for (int i = 0 ; i < n ; i++){
		printf("Nhap gia tri thu %d cua mang: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Nhap gia tri can tim: ");
	scanf("%d",&x);
	
	int result = binarySearch(arr,n,x);
	
	if ( result != -1 ){
		printf("phan tu %d duoc tim thay tai vi tri %d\n", x, result);
		
	}else {
		printf("Khong tim thay gia tri cua phan tu %d trong mang",x );
	} 
	
	
   printf("Cam on ban da su dung tim kiem cua chung toi!!");
	
	
	return 0 ; 
}
