#include<stdio.h>

struct Car {
	char model[100];
	int year ;
	int price ; 
};



int main(){
	struct Car car_01 = {"BMW",2020,100000};
	printf("Ten xe la: %s\n",car_01.model);
	printf("Nam san xuat la: %d\n",car_01.year);
	printf("Gia tien la: %d\n",car_01.price); 
	return 0 ; 
}
