#include <stdio.h>
#include <math.h> 

int main(){
	double  a , b , S  ; 
	printf("nhap so  a =  : ") ;
	scanf("%lf",&a); 
	printf("nhap so nguyen b : ") ; 
	scanf("%lf",&b); 
	// tinh gia tri bieu thuc  
	S = sqrt(a + sqrt(b + 1)) + sqrt(b + sqrt(a * a + b * b)) ; 
	printf("Gia tri cua bieu thuc la : %lf ", S ) ; 
	
	return 0 ; 
	 
} 
