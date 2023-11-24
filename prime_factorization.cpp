#include <iostream>
#include <cmath>


void prime_fact(long long n) {

	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			
			// If n=18, this prints 9, which is not prime factorization.
			n = n / i;
			std::cout << n << '\n';
		}
	}

}



int main() {

	long long n{};

	std::cout << "Input the number you would like to factorize: ";
	std::cin >> n;

	prime_fact(n);

	return 0;
}