#include <iostream>

void fizzbuzz(int n) {

	

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "fizzbuzz\n";
		}
		else if (i % 3 == 0) {
			std::cout << "fizz\n";
		}
		else if (i % 5 == 0) {
			std::cout << "buzz\n";
		}
		else {
			std::cout << i << '\n';
		}
	}

}


int main() {

	int n{};

	std::cout << "Please enter the amount of numbers you would like to fizzbuzz: ";
	std::cin >> n;

	fizzbuzz(n);

	return 0;
}