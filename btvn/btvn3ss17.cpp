#include<stdio.h>
#include<string.h>

int main(){
	char name01[100];
	char name02[1000];
	
	printf("Nhap chuoi ki tu thu 1 tu  ban phim ng dung: ");
	fgets(name01 , sizeof(name01) , stdin);
	name01[strcspn(name01 , "\n")] = '\0'; 
	
	printf("Nhap chuoi ki tu thu 2 tu ban phim nguoi dung: "); 
	fgets(name02 , sizeof(name02) , stdin );
	name02[strcspn(name02 , "\n")] = '\0';
	
	whie (name[i] != '\0'){
		
	} 
	
	char *cmp = strcat(name01 , name02);
	
	printf("Chuoi sau khi nhap la: %s\n",cmp);
	
	

	
	return 0 ;  
} 
