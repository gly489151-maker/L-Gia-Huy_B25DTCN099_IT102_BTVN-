#include<stdio.h>
#include<string.h>

int main(){
	char name[100];
	
	printf("Nhap chuoi ki tu cua ban: ");
	fgets(name,sizeof(name),stdin);
	name[strcspn(name , "\n")] = '\0'; 
	int cmp = strlen(name); 
	int isPalindrome = 1 ; 
	
	for (int i = 0 ; i < cmp / 2 ; i++){
		if(name[i] != name[cmp - i - 1 ]){
			isPalindrome = 0 ;  
		} 
	}
	
	if(isPalindrome){
		printf("la isPalindrome"); 
	}else {
		printf("khong phai la isPalindrome ");
	} 
	
	
	
	
	
	
	
	
	
	
	return 0 ;  
} 
