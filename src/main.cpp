#include "prime.hpp"
#include <iostream>
int main() {
    constexpr int LO = 2, HI = 10000;
    
    // TODO: Count modulo operations for both algorithms
    bool isPrimeHalf(int n, long long* modOps);
    bool isPrimeSqrt(int n, long long* modOps);
    long long halfOps = countModOps(isPrimeHalf,LO,HI);
    long long sqrtOps = countModOps(isPrimeSqrt,LO,HI);
    
    long long modOps = 0;
    std::cout << isPrimeHalf(92, &modOps) << "\n";
    // TODO: Print the results
    std::cout << "Half method operations: " << halfOps << "\n";
    // Add more output as needed
    
    // TODO: Calculate and print the ratio
    double ratio = halfOps / sqrtOps;
    std::cout << "Ratio (Half/Sqrt): " << ratio << "\n";
    
    return 0;
}