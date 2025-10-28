#include <stdio.h>

int main(){
	int age  ;
	float tiketPrice ;  
	printf("nhap so tuoi cua ban : "); 
	scanf("%d",&age );
	
	
	if ( age  < 0 ){
		printf("ban da nhap sai quy trinh moi ban nhap lai "); 
		return 0 ;  
	} 
	
	
	if (age < 6 ){
		tiketPrice= 0 ;  
	}else if (age<18){
		tiketPrice= 10.000 ;  
	}else if (age<60){
		tiketPrice= 20.000 ;  
	}else {
		tiketPrice=14.000 ;  
	} 
	
	printf("so tien ban phai chi tra cho chuyen di la : %.3f VND ", tiketPrice) ; 
	
	
	
	return 0 ;  
} 
