#include <stdio.h>

int main(){
	int n ; 
	double A ;
	printf("nhap n (>1) : ") ; 
	scanf("%d", &n ) ; 
	
	if (n <= 1 ){
		printf("Gia tri khong hop le !\n "); 
		return 0 ;  
	}
	// tinh gia tri cua bieu thuc 
	  A = 1.0 / ((n - 1) * n) 
      + 1.0 / (n * (n + 1)) 
      + 1.0 / ((n + 1) * (n + 2));
	  printf("dap an cua bieu thuc la %5d\n", A );  
	
	
	return 0 ;  
} 
