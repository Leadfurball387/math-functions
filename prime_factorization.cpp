// DOES NOT WORK WELL

#include <iostream>
#include <cmath>
#include <vector>


bool is_prime(long long n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}

	return true;
}


void prime_fact(long long n) {

	std::vector<int> factors{};
	int pair;

	for (int i = 2; i <= sqrt(n) + 1; i++) {
		if (is_prime(i)) {
			if (n % i == 0) {
				pair = n / i;
				factors.push_back(i);
				if (is_prime(pair)) {
					factors.push_back(pair);
				}
			}
		}
	}

	for (int i : factors) {
		std::cout << i << '\n';
	}

	if (is_prime(n)) {
		std::cout << "The number is prime.";
	}

}



int main() {

	long long n{};

	std::cout << "Input the number you would like to factorize: ";
	std::cin >> n;

	prime_fact(n);

	return 0;
}