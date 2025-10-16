#include <stdio.h>
#include <math.h>

int main (){
	int a = 1 , b = 1 , c = 1; 
	float result ;
	
	result =  (pow(a,2) + sqrt(pow(b,2)+ 4 * a * c )- pow(b,3)/pow(c,2) + sqrt(fabs(a)-fabs(b)));
	printf("khai bao ra ket qua %f", result);
	

	
	return 0 ;  
} 
