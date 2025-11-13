#include<stdio.h>
#include<string.h>

int main(){
	char name[] = "HELLO PTIT";
	char x ; 
	int count=0;
	printf("Chuoi ki tu trong mang la: %s\n",name);
	printf("Nhap chu can tim: ");
	scanf("%c",&x);
	int cmp = strlen(name);
	for (int i = 0 ; i < cmp ; i++){
		if(name[i] == x ){
			count++;
		}
	}
	
	printf("Da tim thay ki tu %c xuat hien %d lan ",x,count);
	return  0 ; 
 } 
	
	
	
	
	
	
	


