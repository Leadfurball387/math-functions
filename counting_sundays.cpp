// DOES NOT WORK

#include "math_funcs.h"


void number_of_days() {

	int n{};

	for (int i = 1; i < 100; i++) {
		if (i % 4) {
			n += 366;
		}
		else {
			n += 365;
		}
	}

	std::cout << n;

}


int main() {

	number_of_days();

	return 0;
}