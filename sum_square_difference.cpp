#include <iostream>


void sum_square_difference() {

	int n{ 100 };

	int sum{ 0 };
	int sqr_of_sum{};

	int sum_of_sqrs{0};

	int diff{};


	for (int i = 1; i <= n; i++) {

		sum = sum + i;
		sum_of_sqrs = sum_of_sqrs + (i * i);

	}

	sqr_of_sum = sum * sum;

	diff = sqr_of_sum - sum_of_sqrs;

	std::cout << diff;
}


int main() {

	sum_square_difference();

	return 0;
}