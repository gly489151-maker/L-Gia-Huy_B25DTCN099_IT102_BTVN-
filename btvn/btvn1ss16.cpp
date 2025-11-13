#include<stdio.h>
#include<string.h>

 int main(){
    char name[100];
    
    printf("Nhap chuoi ki tu ban mong muon: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name , "\n")] = '\0';
    
    printf("Chuoi ki tu la:%s\n",name);
	printf("Do dai chuoi ki tu khong:%d",strlen(name)); 
    
	return 0 ;  
 } 
