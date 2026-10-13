#include <iostream>
#include <cstdint>
#include <string>

uint32_t product (int32_t n);

int main (){
    int32_t n;
    std::cin >> n;
    std::cout << product(n) << std::endl;
    return 0;
}

uint32_t product (int32_t n){
    uint32_t result = 1;
    if (n == 0) return 0;
    for (int32_t i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}