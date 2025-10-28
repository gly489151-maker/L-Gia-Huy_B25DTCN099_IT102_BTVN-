#include<stdio.h>

int main(){
	int n ; 
	printf("moi ban nhap so nguyen to tu 2 - 8 :  ") ; 
	scanf("%d",&n); 
	
	// khai bao bien trong bang gia tri switch 
	
	switch(n){
		case 2:
		printf("hom nay la thu 2 nhe ban "); 
		break ; 
		case 3:
		printf("hom nay la thu 3 nhe ban ") ; 
		break ; 
		case 4: 
		printf("hom nay la thu 4 nhe ban ") ;
		break ; 
		case 5:
		printf("hom nay la thu 5 nhe ban "); 
		break ; 
		case 6:
		printf("hom nay la thu 6 nhe ban ") ; 
		break ; 
		case 7: 
		printf("hom nay la thu 7 nhe ban ") ; 
		break; 
		case 8: 
		printf("hom nay la chu nhat nhe ban ") ; 
		break ;  
		default:
			
		printf("sai r nhe con vo ") ; 
		 
	 
	} 
	
	return 0 ;  
} 
