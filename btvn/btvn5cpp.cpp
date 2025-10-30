#include<stdio.h>

  

	int main(){
	int n , temp , temp2 , soChuSo = 0 , digit , sum = 0  ; 
	
	printf("nhap so nguyen n : ");
	scanf("%d",&n);
	
	temp = n ;
	
	temp2 = n ; 
	
	while (temp2 != 0 ){
		soChuSo++;
		temp2 /= 10 ;  
	} 
	
	while (temp2 != 10 ){
		digit = temp2 % 10 ; 
		
			int mu = 1 ; 
	    for(int i = 1 ; i <= soChuSo ; i++){
		mu = mu * digit ;  
	} 
	
	sum += mu ; 
	
	temp2 /=10 ; 
	} 
 
	
	if (sum == temp){
		printf ("%d la so armstrong\n",temp);
		 
	}else {
		printf("%d day khong phai la so armstrong\n",temp );
	} 
	
	
	if (sum == temp){
		printf ("%d la so armstrong\n",temp);
		 
	}else {
		printf("%d day khong phai la so armstrong\n",temp );
	} 
	
	 
	
	
	
	
	
	return 0 ;  
} 
