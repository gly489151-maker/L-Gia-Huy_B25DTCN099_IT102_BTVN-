#include <stdio.h>

int main(){
	float heSoLuong  ; 
	int ngayCong , chucVu ; 
	long phuCap = 0 , thuong = 0 ;
	long luong ;   

	printf ("he so luong cua ban : ");
	scanf ("%f", &heSoLuong ); 
	
	printf ("ngay cong cua ban : "); 
	scanf ("%d", &ngayCong );
	
	printf ("chuc vu cua ban la gi ( 1 :  nhan vien ,2 : to truong ,3 : quan li ) : "); 
	scanf ("%d",& chucVu ); 
	
	if ( chucVu == 1 ){
		phuCap = 500000 ; 
	}else if (chucVu == 2 ){
		phuCap = 1000000 ; 
	}else if (chucVu == 3 ){
		phuCap = 2000000 ; 
	}else {
		printf("chuc vu khong hop le nhe moi ban nhap lai ") ; 
		  
	} 
	
	if (ngayCong > 26 ){
		thuong = (ngayCong - 26 ) * 200000 ; 
	} 
	
	// tinh luong 
	luong = ngayCong * 160000 * heSoLuong + phuCap + thuong;
	 // xuat ket quay 
	 printf("\n============BANG CONG CUA NHAN VIEN================\n");
	 printf( "Phu cap : %ld VND ", phuCap );
	 printf("Thuong : %ld VND ", thuong );
	 printf("Luong : %ld VND ", luong );  
	
	
	return 0 ;  
	
} 
