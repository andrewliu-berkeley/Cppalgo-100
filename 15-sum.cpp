#include <iostream>
#include <cstdint>
#include <string>
#include <numeric>
#include <Cmath>

double sum (int64_t n);

int main(void){
    int64_t n;
    std::cout << "Input n: ";
    std::cin >> n;
    std::cout << sum(n) << std::endl;
    return 0;
}

double sum (int64_t n){
    double result = 0;
    for (int64_t i = 1; i <= n; i++){
        result += 1.0 / ((i * (i + 1)) / 2);
    }
    return result;
}