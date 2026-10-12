#include <iostream>
#include <cstdint>

uint32_t sum (int32_t n);

int main(void){
    int32_t n;
    std::cin >> n;
    std::cout << sum(n) << std::endl;
    return 0;
}

uint32_t sum (int32_t n){
    uint32_t result = 0;
    for (int32_t i = 1; i <= n; i++){
        result += i;
    }
    return result;
}
