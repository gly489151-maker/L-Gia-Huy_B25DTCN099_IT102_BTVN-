#include<stdio.h>
#include<string.h>

int main(){
	char name[100]; 
	
	printf("Nhap chuoi ki tu cua ban: ");
	fgets(name,sizeof(name),stdin);
	name[strcspn(name , "\n")] = '\0'; 
	int cmp = strlen(name); 
	int count = 0 ;  
	for(int i = 0 ; i < cmp ; i++){
		if ((name[i] != ' ') && (i == 0 || name[i - 1] == ' ')) {
            count++;
        }
	}
	
	printf("%d",count); 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;  
} 
