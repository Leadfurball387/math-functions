#include "math_funcs.h"


int nth_triangular_num(int n) {
	long long nth_tri{ 0 };

	for (int i = 1; i <= n; i++) {
		nth_tri = nth_tri + i;
	}

	return nth_tri;
}


int num_of_divisors(long long n) {

	int numdiv{};



	return numdiv;
}


int main() {

	std::cout << nth_triangular_num(6);

	return 0;
}