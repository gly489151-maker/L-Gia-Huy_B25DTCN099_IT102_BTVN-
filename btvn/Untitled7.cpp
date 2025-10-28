#include <stdio.h>

int main() {
    float consumed_m3;
    
    long long total_cost = 0; 
    
    
    const int price_tier1 = 6000;  // 0 - 10 m3
    const int price_tier2 = 7000;  // 11 - 20 m3
    const int price_tier3 = 8500;  // 21 - 30 m3
    const int price_tier4 = 10000; // Trên 30 m3

    
    printf("Nhap so met khoi (m3) nuoc tieu thu trong thang: ");
   
    if (scanf("%f", &consumed_m3) != 1 || consumed_m3 < 0) {
        printf("Loi: So lieu nhap vao khong hop le.\n");
        return 1;
    }


    float remaining_m3 = consumed_m3;

   
    if (remaining_m3 > 30) {
       
        float tier4_m3 = remaining_m3 - 30;
        total_cost += (long long)(tier4_m3 * price_tier4);
        remaining_m3 -= tier4_m3; 
    }

    
    if (remaining_m3 > 20) {
         
        float tier3_m3 = remaining_m3 - 20;
        total_cost += (long long)(tier3_m3 * price_tier3);
        remaining_m3 -= tier3_m3; // Gi?m s? m3 ð? tính
    }

    
    if (remaining_m3 > 10) {
        
        float tier2_m3 = remaining_m3 - 10;
        total_cost += (long long)(tier2_m3 * price_tier2);
        remaining_m3 -= tier2_m3; // Gi?m s? m3 ð? tính
    }

   
    if (remaining_m3 > 0) {
        total_cost += (long long)(remaining_m3 * price_tier1);
    }

   
    printf("\n--- Hoa don nuoc tieu thu ---\n");
    printf("So luong tieu thu: %.2f m3\n", consumed_m3);
    printf("Tong so tien phai tra: %lld VNÐ\n", total_cost);

    return 0;
} 
