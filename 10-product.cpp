#include <iostream>
#include <cstdint>

void product (int32_t* result, int32_t x, int32_t n);

int main (){
    int32_t x, n;
    int32_t result;
    std::cout << "Nhap x: ";
    std::cin >> x;
    std::cout << "Nhap n: ";
    std::cin >> n;
    product(&result, x, n);
    std::cout << result << std::endl;
    return 0;
}

void product (int32_t* result, int32_t x, int32_t n){
    if (x == 0 && n <= 0){
        *result = 0; 
        return;
    }
    *result = 1;
    for (int i = 1; i <= n; i++) {
        *result = *result * x;
    }
}