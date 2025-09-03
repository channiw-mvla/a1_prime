//prime.cpp
#include "prime.hpp"
#include <cmath>
// TODO: Implement isPrimeHalf
bool isPrimeHalf(int n, long long* modOps) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= n/2; i++){
        (*modOps)++;
        if(n % i == 0)
            return false;
    }
    return true;
    // Your implementation here
    // Checks for divisibility up to n/2
    // return true if n is prime else return false
    // count modulo operations when modOps is not nullptr
}

// TODO: Implement isPrimeSqrt
bool isPrimeSqrt(int n, long long* modOps) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++){
        (*modOps)++;
        if(n % i == 0)
            return false;
    }
    return true;
    // Your implementation here
    //Checks for divisibility up to square root of n
    // return true if n is prime else return false
    // Remember to count modulo operations when modOps is not nullptr
}

// TODO: Implement countModOps
long long countModOps(PrimeFn isPrime, int lo, int hi) {
    long long totalModOps = 0;
    for (int i = lo; i <= hi; i++){
        long long modOps = 0;
        isPrime(i,&modOps);
        totalModOps += modOps;
    }
    return totalModOps;
    // Your implementation here
    // This should call the provided isPrime function for each number in range [lo, hi]
    // and return the total number of modulo operations performed
}