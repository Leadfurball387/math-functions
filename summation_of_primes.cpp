#include "math_funcs.h"


void summation_of_primes(int n) {
	long long sum{ 0 };
	int num{ 1 };

	do {
		if (is_prime(num)) {
			sum = sum + num;
		}
		num++;
	} while (num < n);

	std::cout << sum;
}


int main() {

	summation_of_primes(2000000);

	return 0;
}