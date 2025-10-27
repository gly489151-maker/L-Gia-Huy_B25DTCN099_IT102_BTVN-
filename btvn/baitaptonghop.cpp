#include <stdio.h>

int main (){
	int namSinh; 
	float diemTB ; 
	int namHienTai = 2025 ; 
	int tuoi ; 
	
	printf("nhap nam sinh : ");
	scanf("%d",&namSinh) ; 
	
	printf("nhap diem trung binh : ") ; 
	scanf("%f",&diemTB); 
	
	if (namSinh<=1900 || namSinh > namHienTai ) {
		printf("nam sinh k hop le "); 
		return 0 ; // ket thuc chuong trinh neu nhap nam sinh sai cu phap 
	}
	tuoi = namHienTai - namSinh ; 
	
	printf("\n ==========Thong tinh sinh vien =============\n");
	printf("nam sinh : %d\n ", namSinh ); 
	printf("tuoi : %.2d\n", tuoi );
	printf("diem trung binh : %.2f\n", diemTB); 
	
	// kiem tra tuoi cua ban than 
	if (tuoi >=18 ){
		printf("du tuoi : co \ n ");
	}else{
		printf ("du tuoi : khong \ n");
	}
	// xep loai diem trung binh ca nhan 
	if (diemTB < 5 ){
		printf("hoc sinh yeu nhe");
	}else if (5.0<diemTB<6.4){
		printf("hoc sinh trung binh "); 
	}else if (6.5<diemTB<7.4){
		printf("hoc sinh gioi kha ");
	}else if (7.4<diemTB<9.0){
		printf("hoc sinh gioi ");
	}else if (9.0<diemTB<10){
		printf("hoc sinh gioi "); 
		
	}
	return 0 ; 
	
}
