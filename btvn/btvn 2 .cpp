#include <stdio.h>

int main(){
	int a ; 
	
	printf("nhap gia tri a = ");
	scanf("%d",&a);
	
	if (a<1 || a>10){
		printf("gia tri khong hop le , moi ban nhap lai nhe !! ");
		
	}
	while (a < 1  || a >  10 ){
		printf ("bang cuu chuong "); 
		
	}
	
	for (int i = 1 ; i <= 10 ; i ++ ){
		printf("%d x %d = %d\n ", a , i , a * i ); 
	}
	
	return 0 ; 
}
