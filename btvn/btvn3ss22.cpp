#include<stdio.h>
#include<string.h>
#define MAX 100 
struct DateOfBirth  {
	int ngay ; 
	int thang ; 
	int nam ; 
}; 
struct SinhVien {
	char id [50];
	char name [50];
	struct DateOfBirth day ;
	char address[100];
	char phoneNumber [50];
};

int main(){
	struct SinhVien ds[100];
	int choice ;
	int n = 0 ; 
	do {
		printf("\n-------Menu-------\n");
		printf("1. Nhap thong tin sinh vien\n");
		printf("2. Hien thi thong tin sinh vien\n");
		printf("3. Them sinh vien vao cuoi danh sach\n");
		printf("4. Xoa sinh vien theo ma sinh vien\n");
		printf("5. Cap nhat thong tin sinh vien theo ma sinh vien\n");
		printf("6. Sap xep sinh vien theo ho ten (A-Z)\n");
		printf("7. Tim kiem sinh vien theo ma sinh vien\n");
		printf("8. Thoat chuong trinh!!\n");
		printf("\n-------------------------------------\n");
		printf("Moi ban nhap lua chon: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1 :{
				printf("Nhap so luong sinh vien: ");
				scanf("%d",&n);
				getchar();
				for(int i = 0 ; i < n ; i++){
					printf("\n---Sinh vien thu %d-----\n",i+1);
					printf("Nhap ma sinh vien cua sinh vien: ");
					fgets(ds[i].id,sizeof(ds[i].id),stdin);
					ds[i].id[strcspn(ds[i].id,"\n")]='\0';
					
					printf("Nhap ten sinh vien: ");
					fgets(ds[i].name,sizeof(ds[i].name),stdin);
					ds[i].name[strcspn(ds[i].name,"\n")]='\0';
					
					printf("Ngay sinh ( ngay thang nam sinh ): ");
					scanf("%d %d %d",ds[i].day.ngay,ds[i].day.thang,ds[i].day.nam);
					
					
					printf("Nhap dia chi : ");
					fgets(ds[i].address,sizeof(ds[i].address),stdin);
					ds[i].address[strcspn(ds[i].address,"\n")]='\0';
					
					printf("Nhap so dien thoai: ");
					fgets(ds[i].phoneNumber,sizeof(ds[i].phoneNumber),stdin);
					ds[i].phoneNumber[strcspn(ds[i].phoneNumber,"\n")]='\0';
				}
				break;
			}
		}
	}while(choice!=8);
	return 0 ; 
}
 
