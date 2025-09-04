//prime.cpp
#include "prime.hpp"
#include <cmath>
// TODO: Implement isPrimeHalf
bool isPrimeHalf(int n, long long* modOps) {
    if (n <= 1) // 1 and 0 are not prime
        return false;
    else if( n <= 2) // 2 is prime
        return true;
    if(modOps) // add to mod ops if not nulls
        (*modOps)++;
    if( n % 2 == 0)
        return false;
    for (int i = 3; i <= n/2; i=i+2){ // skip every two to check oddss
        if(modOps) // add to mod ops if not null
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
    if (n <= 1)// 1 and 0 are not prime
        return false;
    else if( n <= 2)// 2 is prime
        return true;
    if(modOps)// add to mod ops if not nulls
        (*modOps)++;
    if( n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i=i+2){// skip every two to check oddss
        if(modOps) // add to mod ops if not null
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
    long long totalModOps = 0; // add up the total mod ops for each prime in range
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