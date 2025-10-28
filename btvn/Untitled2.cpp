#include <stdio.h>

int main (){
	float  a , soTien  ; 
	printf("nhap muc thu nhap trong vong 1 thang : ");
	scanf("%f",&a);
	
	// kiem tra a co lon hon 0 hay k 
	if (a<0){
		printf("ban da nhap sai cu phap , moi ban nhap lai ");
		return 0 ;  
	} 
	
	
	// tính giá tien  
	
	if (a<=5){
		soTien= a * 5/100 ;  
	}else if (5<a<=10){
		soTien = a * 10/100 ;  
	}else if (a>10){
		soTien = a * 15/100 ;  
	}
	
	printf("so tien ban phai dong thue la : %f ", soTien );  
	
	
	
	
	
	
	
	return 0 ; 
} 
