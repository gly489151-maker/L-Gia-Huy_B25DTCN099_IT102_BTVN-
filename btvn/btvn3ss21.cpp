#include<stdio.h>
#include<string.h> 
struct Address {
	char street [100];
	char city [100];
	int zip ;  
}; 

struct Person {
	char name[100];
	int age ;
	struct Address address ;
}; 

int main (){
struct Person person_01 ; 

printf("Nhap ten cua ban: ");
fgets(person_01.name , sizeof(person_01.name),stdin);
person_01.name[strcspn(person_01.name , "\n")]='\0';

printf("Nhap tuoi cua ban: ");
scanf("%d",&person_01.age);
getchar();

printf("Nhap ten duong cua ban vao day: ");
fgets(person_01.address.street,sizeof(person_01.address.street),stdin);
person_01.address.street[strcspn(person_01.address.street , "\n")]='\0';


printf("Nhap ten thanh pho cua ban vao day: ");
fgets(person_01.address.city,sizeof(person_01.address.city),stdin);
person_01.address.city[strcspn(person_01.address.city , "\n")]='\0';

printf("Nhap ma zip: ");
scanf("%d",&person_01.address.zip);


printf("\n========Thong tin nguoi dung============\n");

printf("Ten cua ban la: %s\n",person_01.name);
printf("Tuoi cua ban la: %d\n",person_01.age);

printf("\n======= Dia chi ca nhan==============\n");
printf("Ten duong cua ban la: %s\n",person_01.address.street);
printf("Ten thanh pho cua ban la: %s\n",person_01.address.city);
printf("Ma zip cua ban la: %d",person_01.address.zip);
	
	return 0 ;  
} 
