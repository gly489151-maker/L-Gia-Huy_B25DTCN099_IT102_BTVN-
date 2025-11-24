#include<stdio.h>
#include<string.h>
struct Contact {
	char name[50];
	char phoneNumber[16];
	char email[50];
};
int main(){
	
	struct Contact ct[100];
	int n ; 
	int choice ; 
	do {
		printf("\n------MENU-----\n");
		printf("1. Them lien he moi\n");
		printf("2. Hien thi tat ca lien he\n");
		printf("3. Tim kiem theo ten\n");
		printf("4. Xoa lien he theo ten\n");
		printf("5. Thoat chuong trinh!!!\n");
		printf("\n-----------------------\n");
		printf("Moi ban nhap lua chon cua minh: ");
		scanf("%d",&choice);
		
		switch (choice){
			case 1 :{
				printf("\n----Them lien he moi-------\n");
				
				printf("Nhap so nguoi can them: ");
				scanf("%d",&n);
				getchar();
				for(int i = 0 ; i < n ; i++){
					printf("Nhap ten nguoi lien he: ");
					fgets(ct[i].name,sizeof(ct[i].name),stdin);
					ct[i].name[strcspn(ct[i].name,"\n")]='\0';
					
					printf("Nhap so dien thoai cua nguoi lien he: ");
					fgets(ct[i].phoneNumber,sizeof(ct[i].phoneNumber),stdin);
					ct[i].phoneNumber[strcspn(ct[i].phoneNumber,"\n")]='\0';
					
					printf("Nhap gmail nguoi dung: ");
					fgets(ct[i].email,sizeof(ct[i].email),stdin);
					ct[i].email[strcspn(ct[i].email,"\n")]='\0';
						
				}
				break;
			}
			case 2 :{
				printf("\n-----Hien thi danh sach nguoi lien he------\n");
				for(int i = 0 ; i < n ; i++){
					printf("Ten: %s\n",ct[i].name);
					printf("So dien thoai: %s\n",ct[i].phoneNumber);
					printf("Email: %s\n",ct[i].email);
				}
				break;
			}
			case 3:{
				char findName[50] ; 
				int found = 0 ; 
				printf("Ten muon tim kiem :");
				fgets(findName,sizeof(findName),stdin);
				findName[strcspn(findName , "\n")]='\0';
				
				for (int i = 0 ; i < n ; i++){
					if (strcmp(ct[i].name,findName)==0){
						printf("Da tim thay nguoi lien he\n");
						printf("Ten: %s\n",ct[i].name);
					    printf("So dien thoai: %s\n",ct[i].phoneNumber);
					    printf("Email: %s\n",ct[i].email);
					    found = 1 ;
					}
				}
				if(!found){
					printf("\nKhong tim thay lien he\n");
				}
				break;
			}
			case 4: {
				char deletName[50];
				printf("Nhap ten can xoa: ");
				fgets(deletName,sizeof(deletName),stdin);
				deletName[strcspn(deletName,"\n")]='\0';
				
				int find = 0 ; 
				for (int i = 0 ; i < n ; i++){
					if(strcmp(ct[i].name,deletName)==0){
						for(int j = 0 ; j < n - 1 ; j++){
							ct[j]=ct[j+1];
						}
						n--;
						printf("Da xoa thanh cong!\n");
						break ; 
					}
				}
				if (!find){
					printf("Khong tim thay gia tri\n");
				}
				break;
			}
			case 5 : {
				printf("Thoat chuong trinh\nCam on ban da su dung he thong cua toi!!\nI love you\n");
				break;
			}
			default : {
				printf("Lua chon khong hop le!!\n");
				break;
			}
		}
	}while(choice!=5);
	return 0 ; 
}
