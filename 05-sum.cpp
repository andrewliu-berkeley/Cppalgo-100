#include <iostream>
#include <cstdint>
#include <string>
#include <numeric>

double sum (int32_t n);
std::string sumFraction(int32_t n);

int main(void){
    int32_t n;
    std::cin >> n;
    std::cout << sum(n) << std::endl;
    std::cout << sumFraction(n) << std::endl;
    return 0;
}

double sum (int32_t n){
    double result = 1;
    for (int32_t i = 1; i <= n + 1; i++){
        result += 1.0 / ((2 * i) + 1);
    }
    return result;
}

std::string sumFraction(int32_t n){
    uint32_t numerator = 0;
    uint32_t denominator = 1;
    for (int32_t i = 1; i <= n; i++){
        
        numerator = numerator * ((2 * i) + 1) + denominator;
        denominator *= ((2 * i) + 1);

        uint64_t g = std::gcd(numerator, denominator);

        numerator /= g;
        denominator /= g;
    }
    
    return std::to_string(numerator) + "/" + std::to_string(denominator);
}