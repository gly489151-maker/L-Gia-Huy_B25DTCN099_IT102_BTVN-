#include<stdio.h>

int main (){
	 int n , temp , reversed = 0 , digit  ; 
	 
	 printf ("Nhap so n : ");
	 scanf("%d",&n);
	 
	 temp = n ; 
	 
	 while(n != 0 ){
	 	digit = n % 10 ; 
		 reversed = reversed * 10 + digit ; 
		 n = n / 10 ;  
	 } 
	 
	if (temp == reversed){
		printf("%d la so doi xung\n",temp); 
	}else{
	  printf("%d khong phai la so doi xung\n",temp);
	  } 
	
	
	
	
	
	
	return 0 ;  
	
}
