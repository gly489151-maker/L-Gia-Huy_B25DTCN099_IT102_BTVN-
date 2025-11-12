#include<stdio.h>
int hieu(int a , int b ){
	return a - b ;  
} 
int tich(int a , int b ){
	return a * b ;  
} 
int main (){
	int x , y ; 
	printf("Nhap so x: ");
	scanf("%d",&x);
	printf("Nhap so y: ");
	scanf("%d",&y);
	printf("Hieu cua hai so %d va %d là: %d\n",x , y , hieu(x,y));
	printf("Tich cua hai so %d va %d là: %d",x , y , tich(x,y));
	return 0 ;  
}

