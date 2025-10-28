#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

   // nhap vao ki tu duy nhat  
    printf("Nhap vao mot ky tu duy nhat: ");
   
    scanf(" %c", &ch); 

    
    if (isalpha(ch)) {
        
        
        if (islower(ch)) {
           
            char upper_ch = ch - 32; 
            printf("Ky tu hoa tuong ung: %c\n", upper_ch);
        } 
        
       
        else if (isupper(ch)) {
            
            char lower_ch = ch + 32;
            printf("Ky tu thuong tuong ung: %c\n", lower_ch);
        }
    } 
  
    else {
        printf("Khong phai chu cai.\n");
    }

    return 0;
}
