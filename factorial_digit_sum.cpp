#include "math_funcs.h"


void factorial_string(int n) {

	std::string strfact{};
	unsigned long long fact{ 1 };

	for (int i = n; i >= 1; i--) {
		fact *= i;
	}

	std::cout << fact;

}


int main() {

	int n{};
	std::cin >> n;

	factorial_string(n);

	return 0;
}