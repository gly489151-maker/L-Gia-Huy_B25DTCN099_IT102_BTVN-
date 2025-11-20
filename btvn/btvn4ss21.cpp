#include<stdio.h>
#include<string.h>
struct Book {
	char title [100];
	char author [100];
	float price ;
};



int main(){
	
	struct Book book[3];
	
	for (int i = 0 ; i < 3 ; i++){
		
		printf("Nhap thong tin quyen sach thu %d\n",i+1);
		getchar();
		printf("Nhap ten cuon sach o day: ");
		fgets(book[i].title,sizeof(book[i].title),stdin);
		book[i].title[strcspn(book[i].title,"\n")]='\0';
		
		printf("Nhap ten tac gia o day: ");
		fgets(book[i].author,sizeof(book[i].author),stdin);
		book[i].author[strcspn(book[i].author , "\n")]='\0';
		
		printf("Nhap gia tien o day: ");
		scanf("%f",&book[i].price);
		
	}
	
	printf("\n========Danh sach nhung cuon sach la=========\n");
	
	for(int i = 0 ; i < 3 ; i++){
		printf("Sach: %d\n",i+1);
		printf("Ten sach la: %s\n",book[i].title);
		printf("Ten tac gia la: %s\n",book[i].author);
		printf("Gia tien la: %.2f\n",book[i].price);
	}
	
	
	
	
	
	
	
	return 0;
}
