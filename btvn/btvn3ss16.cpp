#include<stdio.h>
#include<string.h>

int main(){
	char name[] = "HELLO PTIT";
	
	printf("Chuoi ki tu duoc khai bao la: %s\n",name);
	printf("Chuoi ki tu sau khi dao nguoc la: \n");
	int cmp = strlen(name);
	for (int i = cmp - 1 ; i >= 0 ; i--){
		printf(" %c ",name[i]);
	}
	 
	return 0 ;  
} 
