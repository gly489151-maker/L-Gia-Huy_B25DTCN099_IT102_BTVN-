#include<stdio.h>
#include<string.h>
struct Student{
	char name[100];
	int age ; 
	float grade ;
};

int main(){
	struct Student student_01 ;
	
	printf("Nhap ten cua ban vao day: ");
	fgets(student_01.name,sizeof(student_01.name),stdin);
	student_01.name[strcspn(student_01.name , "\n")]='\0';
	
	
	printf("Nhap tuoi cua ban vao day: ");
	scanf("%d",&student_01.age);
	
	printf("Nhap diem trung binh cua sinh vien vao day: ");
	scanf("%f",&student_01.grade);
	
	printf("\n===========Ho so sinh vien=============\n");
	printf("Ten : %s | Tuoi : %d | Diem trung binh : %.2f |",student_01.name,student_01.age,student_01.grade);
	return 0 ; 
}
