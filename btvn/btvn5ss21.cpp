#include<stdio.h>
#include<string.h>
struct Product {
	char name[50];
	float price ; 
	int quantity;
};




int main(){
	struct Product product[5];
	float result = 0 ;
	for (int i = 0 ; i < 5 ; i++){
		printf("Thanh vien thu %d\n",i+1);
		
		printf("Nhap ten san pham: ");
		fgets(product[i].name,sizeof(product[i].name),stdin);
		product[i].name[strcspn(product[i].name,"\n")]='\0';
		
		printf("Nhap gia cua san pham: ");
		scanf("%f",&product[i].price);
		
		printf("Nhap so luong san pham: ");
		scanf("%d",&product[i].quantity);
		
		
		result += product[i].price * product[i].quantity ; 
	}
	
	printf("\n======Tong gia tri san pham la=========\n");
	printf("Tong gia tri la: %.2f\n",result);
	
	
	
	return 0 ; 
} 
