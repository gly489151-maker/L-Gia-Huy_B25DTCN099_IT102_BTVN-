#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong thang: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Can it nhat 2 thang de tinh toan (mua va ban)!\n");
        return 0;
    }

    int arr[n];
    printf("Nhap gia co phieu theo tung thang:\n");
    for (int i = 0; i < n; i++) {
        printf("Thang %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int buy_price = arr[0];  
    int best_month = 1;
    int min_loss = arr[1] - buy_price;  

    
    for (int i = 1; i < n; i++) {
        int profit = arr[i] - buy_price;  
        if (profit > min_loss) {  
            min_loss = profit;
            best_month = i + 1;
        }
    }

    
    printf("\nGia mua vao thang 1: %d\n", buy_price);
    printf("Gia ban tot nhat la o thang %d voi gia: %d\n", best_month, arr[best_month - 1]);

    if (min_loss < 0)
        printf("Ban se lo it nhat: %d\n", min_loss);
    else if (min_loss == 0)
        printf("Khong loi khong lo.\n");
    else
        printf("Ban se lai: %d\n", min_loss);

    return 0;
}

