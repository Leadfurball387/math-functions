#include <iostream>



void smallest_multiple() {

	int d{ 20 };
	long long n{ 1 };

	do {

		if (n % d == 0) {
			d = d - 1;
		}
		else {
			d = 20;
			n++;
		}

	} while (d > 0);

	std::cout << n;

}




int main() {

	smallest_multiple();

	return 0;
}