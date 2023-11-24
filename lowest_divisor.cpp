#include <iostream>
#include <cmath>


void lowest_divisor(long long n) {

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			std::cout << n << " is divisible by " << i << ", which equals " << n/i << '.';
			return;
		}
	}
	
	std::cout << n << " is prime.";

}



int main() {

	long long n{};

	std::cout << "Input the number that you would like to find the lowest divisor of: ";
	std::cin >> n;

	lowest_divisor(n);

	return 0;
}