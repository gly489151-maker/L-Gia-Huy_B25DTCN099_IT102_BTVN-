#include<stdio.h>



int lookFor (int arr[], int n ){
	int mincount = n + 1 ; 
	int value = arr[0] ; 
	
	for (int i = 0 ; i < n ; i++){
		int count = 0 ; 
		for (int j = 0 ; j < n ; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if ( count < mincount ){
			mincount = count ; 
			value = arr[i];
		}
	}
	return value ; 
}






int main(){
	int n ; 
	int arr[100];
	
	printf("Nhap gia tri cua mang: ");
	scanf("%d",&n);
	
	for (int i = 0 ; i < n ; i++){
		printf("Nhap gia tri thu %d cua mang la: ",i);
		scanf("%d",&arr[i]);
	}
	
	int result = lookFor(arr,n);
	
	printf("\nPhan tu xuat hien it nhat trong mang la: %d\n",result);	
	

	
	return 0 ; 
}
