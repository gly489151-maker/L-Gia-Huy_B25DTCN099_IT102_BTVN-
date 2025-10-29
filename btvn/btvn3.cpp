#include<stdio.h>

int main (){
	int n ; 
	 
	printf ("nhap so nguyen n : ");
	scanf ("%d",&n);
	
	if ( n < 1 || n > 10 ){
		printf("gia tri khong hop le \n ");
	}
	
	while(n < 1 || n > 10 ){
		printf ("bang cuu chuong /n "); 
	}
	
	for (int i = 1 ; i <= 9 ; i ++ ){
		printf("%d x %d = %d\n ",n , i , n* i );
	}
          








	return 0 ; 
}
