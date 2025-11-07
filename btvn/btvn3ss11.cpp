#include<stdio.h>

int main(){
	int arr[]={2,4,6,8,10,12,14,26,28,30};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x ; 
	
	printf("Nhap phan tu can tim:");
	scanf("%d",&x);
	
	 int left = 0, right = n - 1;
    int found = -1; 

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == x) {
            found = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    
    if (found != -1) {
        printf("Phan tu %d duoc tim thay tai chi so %d.\n", x, found);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }
return 0 ; 
	
	
}
