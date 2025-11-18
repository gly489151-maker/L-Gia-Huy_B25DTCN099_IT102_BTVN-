#include<stdio.h>

int compareArray(int *a , int *b , int n){
	for(int i = 0 ; i < n ; i++){
		if(*(a+i) != *(b+i)){
			return 0 ; 
		}
	}
	return 1;
}

int main(){
	int n ; 
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	
	int a[n] , b[n];
	printf("\nNhap gia tri cac phan tu cua mang a\n");
	printf("\n-----------------------------------\n");
	for (int i = 0 ; i < n ; i++){
		printf("Nhap gia tri thu %d cua mang a: ",i);
		scanf("%d",&a[i]);	
	}
	printf("\n======================================\n");
	printf("\nNhap gia tri cac phan tu cua mang b\n");
	printf("\n-----------------------------------\n");
	for (int i = 0 ; i < n ; i++){
		printf("Nhap gia tri thu %d cua mang b: ",i);
		scanf("%d",&b[i]);
	}
	int result = compareArray(a,b,n);
	
	if (result == 1 ){
		printf("\nHai mang giong nhau\n");
	}else{
		printf("\nHai mang khac nhau\n");
	}
	return 0 ; 
}
