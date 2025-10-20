#include <stdio.h> 
#include <math.h> 


int main (){
	double r , chuvi , dientich  ; 
	printf("nhap ban kinh hinh tron  : "); 
	
	scanf("%lf",&r); // nhap gia tri ban kinh 
	
	chuvi = 2 * M_PI * r ; // tinh chu vi  
	dientich = M_PI *r *r ;// tinh dien tich  
	
	printf("chu vi hinh tron : %2lf\n ", chuvi ); 
	printf("dien tich hinh tron : %2lf\n", dientich );  

	
	
	
	return 0 ;  
	
	 
	
} 
