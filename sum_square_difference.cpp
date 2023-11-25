#include <iostream>


int sum_square_difference(int n) {

	int sum{ 0 };
	int sqr_of_sum{};

	int sum_of_sqrs{ 0 };

	int diff{};


	for (int i = 1; i <= n; i++) {

		sum = sum + i;
		sum_of_sqrs = sum_of_sqrs + (i * i);

	}

	sqr_of_sum = sum * sum;

	diff = sqr_of_sum - sum_of_sqrs;

	return diff;
}


int main() {

	sum_square_difference(10);

	return 0;
}