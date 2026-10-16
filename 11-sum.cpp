#include <iostream>
#include <cstdint>
#include <string>
#include <numeric>

uint64_t sum (int64_t n);
uint64_t sumFactorial(int64_t n);

int main(void){
    int64_t n;
    std::cin >> n;
    std::cout << sum(n) << std::endl;
    std::cout << sumFactorial(n) << std::endl;
    return 0;
}

uint64_t sum (int64_t n){
    uint64_t result = 0;
    for (int64_t i = 1; i <= n; i++){
        uint64_t temp = 1;
        for (int64_t j = 1; j <= i; j++){
            temp *= j;
        }
        result += temp;
    }
    return result;
}

uint64_t sumFactorial(int64_t n){
    uint64_t result = 0;
    uint64_t temp = 1;
    for (int64_t i = 1; i <= n; i++){
        temp *= i;
        result += temp;
    }
    return result;
}