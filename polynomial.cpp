#include <iostream>
#include <cmath>


void solve_quadratic(float a, float b, float c) {
	float xpos{}, xneg{};
	float discriminant = pow(b, 2) - 4 * a * c;


	if (discriminant >= 0) {
		xpos = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		xneg = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

		std::cout << '\n' << "Your postive answer is : " << xpos << '\n';
		std::cout << "Your negative answer is : " << xneg << '\n';
	}
	else {
		std::cout << "There are no real roots." << '\n';
	}
}



int main() {

	float a{}, b{}, c{};

	std::cout << "This program will solve ax^2 + bx + c = 0." << '\n';
	std::cout << "Input your value for a: ";
	std::cin >> a;
	std::cout << "Input your value for b: ";
	std::cin >> b;
	std::cout << "Input your value for c: ";
	std::cin >> c;

	solve_quadratic(a, b, c);

	return 0;
}