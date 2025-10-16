#include <stdio.h>
#include <math.h> 
int main (){
	int a = 3 ;  
	int b = 4;
	int c = 2 ; 
	
	// tinh ket qua cua bieu thuc tren 
	float result ;  
	result =  (sqrt(pow(a,2)+pow(b,2))/ c +1 + (a*b)/c + sqrt(fabs(a)-fabs(b)+ pow(c,2)));
	
	printf("ket qua cua biet thuc tren la %f", result ) ;
	
	return 0 ;  
	 
} 
