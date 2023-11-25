#include <iostream>
#include <cmath>


void log_func() {

	int a{}, b{}, c{};
	float x{};

	std::cout << "This function will solve 'alog base b of x + c' for x." << '\n';
	std::cout << "Input your value for a: ";
	std::cin >> a;
	std::cout << "Input your value for b: ";
	std::cin >> b;
	std::cout << "Input your value for c: ";
	std::cin >> c;

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
	
	log_func();

	return 0;
}