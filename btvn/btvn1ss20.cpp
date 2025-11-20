#include<stdio.h>

struct Student {
	char name[50];
	int age ;
	char phoneNumber [14]; 
}; 





int main(){
	struct Student student_01 = {"Ly Gia Huy " , 18 , "0876898601"};
	
	printf("Ten cua ban la: %s\n",student_01.name);
	printf("Tuoi cua ban la: %d\n",student_01.age);
	printf("So dien thoai cua ban la: %s\n",student_01.phoneNumber); 
	 
	return 0 ;  
} 
