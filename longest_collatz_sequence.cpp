#include "math_funcs.h"


std::vector<long long> nth_collatz_sequence(long long n) {

	std::vector<long long> sequence;

	while (n > 1) {

		sequence.push_back(n);
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = 3 * n + 1;
		}
	}

	sequence.push_back(1); // Add 1 at the end
	return sequence;
}



int longest_collatz_sequence() {

	long long n{};
	int longest_size{ 0 };
	int greatest_start{};

	for (int i = 2; i < 1000000; i++) {
		n = i;
		std::vector<long long> sequence = nth_collatz_sequence(n);
		size_t current_size = sequence.size();

		if (current_size > longest_size) {
			longest_size = current_size;
			greatest_start = i;
			std::cout << longest_size << '\n';
		}
	}
	
	return greatest_start;
}


int main() {

	std::cout << longest_collatz_sequence();
	


	return 0;
}