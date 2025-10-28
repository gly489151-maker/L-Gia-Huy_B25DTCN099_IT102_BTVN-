#include <stdio.h> 

int main(){
	int number01 ;
	printf("nhap so diem mong muon : ") ; 
	scanf("%d",&number01) ; 
	
	if (number01 >= 8 ){
		printf("hoc luc gioi "); 
	}else if (number01 >= 6.5){
		printf("hoc luc kha "); 
	}else if (number01 >= 5 ){
		printf("hoc luc trung binh ") ; 
	}else {
		printf("hoc luc yeu ");  
	}
	
	return 0 ;  
} 
