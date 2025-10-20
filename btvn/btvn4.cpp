#include <stdio.h>
#include <math.h> 

int main() {
	float  toan , van , anh ; 
	float  tong , trungbinh ;   
	printf("nhap so diem toan : ") ; 
	scanf("%f",&toan) ; 
	printf( "nhap so diem van : "); 
	scanf("%f",&van); 
	printf ("nhap so diem anh : "); 
	scanf("%f",&anh ); 
	
	// cong thuc tinh tong va diem trung binh 
	
	tong = toan + van + anh ;
	trungbinh= tong / 3 ; 
	printf("tong diem = %2f\n ", tong );
	printf("diem trung binh = %2f\n ", trungbinh); 
	
	return 0 ;   
	

	
	
	
	
	
	 
	 
 
	 
   

    return 0;
}

