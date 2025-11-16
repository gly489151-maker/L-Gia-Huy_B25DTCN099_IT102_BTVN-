#include<stdio.h>
#include<string.h>

int main(){
	char name[100];
	int choice ; 
	printf("Moi ban nhap mang chuoi ki tu: ");
	fgets(name , sizeof(name),stdin);
	name[strcspn(name , "\n") ] = '\0'; 
	printf("======MENU======\n");
	printf("1. in ra chuoi toan bo ki tu duoc chuyen thanh chu hoa.\n");
	printf("2. in ra chuoi toan bi ki tu duoc chuyen thanh chu thuong.\n");
	printf("Moi ban nhap lua chon cua minh: "); 
	scanf("%d",&choice); 
	int cmp = strlen(name); 
	if ( choice == 1 ){
		for (int i = 0 ; i < cmp ; i++ ){
			if (name[i] >='a' && name[i] <= 'z'){
				name[i]=name[i] - 32 ;  
			} 
		}
		 printf("Chuoi chu thuong: %s\n",name); 
	}else if(choice == 2 ){
		for (int i = 0 ; i < cmp ; i++){
			if (name[i] >= 'A' && name[i] <= 'Z'){
				name[i] = name[i] + 32 ;  
			} 
		} 
		 printf("Lua chon khong hop le!\n");
	} 
	
	
	
	
	
	
	return 0 ;  
} 
