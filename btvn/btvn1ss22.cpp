D#include<stdio.h>
#include<string.h>


struct Student {
	char name [50];
	int age ; 
	float grade;
	}; 
int main(){
	struct Student st[100];
	int n , choice ;
	
	do {
		printf("\n--------Menu---------\n");
		printf("1. Nhap thong tin hoc sinh\n");
		printf("2. Hien thi thong tin hoc sinh\n");
		printf("3. Tinh diem trung binh cua hoc sinh\n");
		printf("4. Thoat chuong trinh\n");
		printf("\n-----------------------\n");
		printf("Moi ban nhap lua chon cua minh: ");
		scanf("%d",&choice);
		
		
		switch(choice){
			case 1 :{
				printf("Nhap so luong sinh vien: ");
				scanf("%d",&n);
				
				for(int i = 0 ; i < n ; i++){
					printf("\n--Sinh vien thu %d--\n",i+1);
					getchar();
					printf("Nhap ten sinh vien: ");
					fgets(st[i].name,sizeof(st[i].name),stdin);
					st[i].name[strcspn(st[i].name,"\n")]='\0';
					
					printf("Nhap tuoi cua sinh vien: ");
					scanf("%d",&st[i].age);
					getchar();
					
					printf("Nhap diem trung binh sinh vien: ");
					scanf("%f",&st[i].grade);
				}
				break;
			}
			case 2 :{
				printf("\n====Danh sach sinh vien=======\n");
				for(int i = 0 ; i < n ; i++){
					printf("Ten sinh vien: %s\n",st[i].name);
					printf("Tuoi sinh vien: %d\n",st[i].age);
					printf("Diem trung binh sinh vien: %.2f\n",st[i].grade);
				}
				break;
			}
			case 3 :{
				float sum=0 ;
				for(int i = 0 ; i < n ; i++){
					sum+=st[i].grade;
					printf("Diem trung binh cua tat ca sinh vien la: %.2f\n",sum / n );
				}
				break;
			}
			case 4 :{
				printf("Thoat chuong trinh!!!");
				break;
			}
			default :{
				printf("Lua chon khong hop le!!\n Moi ban nhap lai\n");
				break;
			}
		}
		
	}while(choice!=4);

	return 0 ; 
}
