#include <iostream>
#include <cmath>


void log_func(int a, int b, int c) {

	float x{};

	if (b > 0 && c > 0) {

		float exp = -c / a;
		x = pow(b, exp );
		std::cout << "Your answer is: " << x << '\n';
	}
	else {
		std::cout << "Out of domain or undefined.";
	}

}





int main() {

	int a{}, b{}, c{};

	std::cout << "This function will solve 'alog base b of x + c' for x." << '\n';
	std::cout << "Input your value for a: ";
	std::cin >> a;
	std::cout << "Input your value for b: ";
	std::cin >> b;
	std::cout << "Input your value for c: ";
	std::cin >> c;


	log_func(a, b, c);

	return 0;
}