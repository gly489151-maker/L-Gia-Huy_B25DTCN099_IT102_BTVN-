#include<stdio.h>
#include<string.h> 

struct Student {
	char name[50];
	int age ;
	char phoneNumber  [16]; 
}; 

int main(){
	
	struct Student student_01 ; 
	
	printf("Nhap ten cua ban vao: ");
	fgets(student_01.name , sizeof(student_01.name),stdin);
	student_01.name[strcspn(student_01.name , "\n")]='\0';
	
	printf("Nhap tuoi cua ban vao: ");
	scanf("%d",&student_01.age);
	
	printf("Nhap so dien thoai cua ban vao: ");
	getchar();
	fgets(student_01.phoneNumber , sizeof(student_01.phoneNumber),stdin);
	student_01.phoneNumber[strcspn(student_01.phoneNumber , "\n")]='\0';
	
	printf("\n=========Ho so du tuyen PTIT===========\n");
	printf("Ten : %s | Tuoi : %d | So dien thoai : %s | ",student_01.name,student_01.age,student_01.phoneNumber);
	 
	return 0 ;  
} 
