#include <iostream>
using namespace std;

int main() {
    int number = 12345;      // Khai bao tung bien  
    int sum = 0;             // bien tach  

    // Tách 
    while (number > 0) {
        int digit = number % 10;  // 
        sum += digit;             
        number /= 10;            
    }

    cout << "Tong cac chu so la: " << sum << endl;
    return 0;
}
