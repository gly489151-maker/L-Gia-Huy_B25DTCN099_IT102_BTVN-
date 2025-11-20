#include<stdio.h>
#include<string.h> 
struct Student {
	char name [100];
	int age ;
	char phoneNumber [16]; 
}; 


int main(){
	struct Student st[5] ;
	for (int i = 0 ; i < 5 ; i++){
		printf("----Sinh vien thu %d-----\n",i+1 );
		
		printf("Nhap ten sinh vien: ");
		fgets(st[i].name , sizeof(st[i].name),stdin);
		st[i].name[strcspn (st[i].name , "\n")] = '\0';
		
		printf("Nhap tuoi sinh vien: ");
		scanf("%d",&st[i].age);
		getchar(); 
		
		printf("Nhap so dien thoai sinh vien: ");
		fgets(st[i].phoneNumber , sizeof (st[i].phoneNumber),stdin);
		st[i].phoneNumber[strcspn(st[i].phoneNumber , "\n")] = '\0'; 
	 
	} 
	

	printf("\n============Ho so sinh vien HOC VIEN CONG NGHE BUU CHINH VIEN THONG====================\n");
	
	for (int i = 0 ; i < 5 ; i++){
		printf("%d | Ten : %s | Tuoi : %d | So dien thoai : %s |\n ", i+1,st[i].name,st[i].age,st[i].phoneNumber);
	}    
	
	
	
	return 0 ;  
} 
