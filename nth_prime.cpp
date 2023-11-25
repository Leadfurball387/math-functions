#include "math_funcs.h"


void nth_prime() {

	int n{ 10001 };
	int ans{};


	for (int inc = 1, prime_number = 1; inc <= n; prime_number++) {
		if (is_prime(prime_number)) {
			ans = prime_number;
			std::cout << prime_number << '\n';
			inc++;
		}
	}

	std::cout << '\n' << ans;
}


int main() {

	nth_prime();

	return 0;
}