#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 998244353;
const int MAX_L = 1000006;

// Function to compute modular exponentiation
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute factorial modulo MOD
vector<long long> factorial(MAX_L + 1, 1);
vector<long long> inverseFactorial(MAX_L + 1, 1);

void precomputeFactorials() {
    for (int i = 2; i <= MAX_L; i++) {
        factorial[i] = factorial[i - 1] * i % MOD;
    }
    inverseFactorial[MAX_L] = modExp(factorial[MAX_L], MOD - 2, MOD);
    for (int i = MAX_L - 1; i >= 1; --i) {
        inverseFactorial[i] = inverseFactorial[i + 1] * (i + 1) % MOD;
    }
}

// Function to compute binomial coefficient C(n, k) % MOD
long long binomialCoeff(int n, int k) {
    if (n < k || k < 0) return 0;
    return factorial[n] * inverseFactorial[k] % MOD * inverseFactorial[n - k] % MOD;
}

int main() {
    int L, N;
    cin >> L >> N;

    // Precompute factorials and inverse factorials
    precomputeFactorials();

    long long totalCost = 0;

    // Loop through all possible choices of N people and calculate the cost
    for (int start = 0; start < L; ++start) {
        for (int end = start + 1; end < start + N; ++end) {
            int maxDistance = min(abs(end - start), L - abs(end - start));
            totalCost = (totalCost + maxDistance) % MOD;
        }
    }

    cout << totalCost << endl;
    return 0;
}
