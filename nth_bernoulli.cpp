#include <iostream>
#include <vector>
#include <iomanip>


// This function was created by ChatGPT

// Function to calculate binomial coefficient
long double binomial(int n, int k) {
    long double res = 1;
    if (k > n - k) {
        k = n - k;
    }
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

// Recursive function to calculate Bernoulli numbers
long double bernoulli(int n, std::vector<long double>& memo) {
    if (n == 0) {
        return 1;
    }

    if (memo[n] != 0) {
        return memo[n];
    }

    long double sum = 0.0;
    for (int k = 0; k < n; ++k) {
        sum += binomial(n + 1, k) * bernoulli(k, memo);
    }

    memo[n] = 1.0 - sum / (n + 1);
    return memo[n];
}

int main() {
    int n;
    std::cout << "Enter the index (n) for the Bernoulli number: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Index must be non-negative." << std::endl;
        return 1;
    }

    std::vector<long double> memo(n + 1, 0);
    long double Bn = bernoulli(n, memo);
    std::cout << std::fixed << std::setprecision(10);
    std::cout << "The " << n << "th Bernoulli number is: " << Bn << std::endl;

    return 0;
}
