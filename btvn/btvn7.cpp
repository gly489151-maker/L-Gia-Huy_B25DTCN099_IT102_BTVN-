#include <stdio.h>
#include <math.h> 

int main (){
	int a , b ; 
	
	do {
			printf ("Nhap so a : ");
	scanf ("%d",&a);
	
	printf ("Nhap so b : ");
	scanf ("%d",&b);
	
	
	}while ( a > b );
	printf("Cac so nguyen to tu %d den %d la : ", a , b ); 
	
	for (int i = a ; i <=b ; i++){
		if (i<=1){
			continue ;  
		} 
		int flag = 1 ;  
		for (int j = 2 ; j < i ; j++){
			if (i % j == 0 ){	
				flag = 0 ; 
				break ;  
			}
		}
		if (flag == 1 ){
			printf ("%d\n",i); 
		} 
	} 
	
	return 0 ;  
	 
} 
