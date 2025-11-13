#include<stdio.h>
#include<string.h>

int main (){
    char name[] = "HELLO PTIT";
	
	printf("Chuoi da khai bao la: %s\n",name);
	printf("Cac ky tu trong chuoi la:\n");
	
	for (int i = 0 ; i < strlen(name) ; i++){
		printf("%c ", name[i]); 
	} 
	
	
	printf("\n"); 
	
	
	
	return 0 ;  
} 
