#include <stdio.h>

int main(){
	int a , b , c , midlle ; 
	 printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);

	
	if ((a> b&& a<c) || (a<b && a>c )){
		midlle = a ;   
	} 
	
	if ((b >a && b < c ) || (b < a && b > c )){
		midlle = b ; 
	} 
	
	if (( c > a && c < b ) || ( c < a && c > b )){
		midlle = c ;  
	}
	
	printf(" so o giua la : %d  ", midlle  ) ; 
	
	
	
	
	return 0 ;  
} 
