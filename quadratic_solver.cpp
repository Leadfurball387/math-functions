#include "math_funcs.h"

// Takes input ints a, b, c
// Solves ax^2 + bx + c
std::string quadratic_solver(int a, int b, int c) {

    float xpos{}, xneg{};
    float imagx{}, realx{};
	float discriminant = pow(b, 2) - 4 * a * c;
    std::string posans{}, negans{};
    std::string ans{};

	if (discriminant >= 0) {
		xpos = (-b + sqrt(discriminant)) / (2 * a);
		xneg = (-b - sqrt(discriminant)) / (2 * a);

        ans = std::to_string(xpos) + ", " + std::to_string(xneg) + '\n';

		return ans;
	}
	else if (discriminant < 0) {
		// std::cout << "There are no real roots." << '\n';

        discriminant *= -1;

        // Cast b to floating point to ensure accurate division
        realx = static_cast<float>(-b) / (2 * a);
        imagx = sqrt(discriminant) / (2 * a);

        posans = std::to_string(realx) + "+" + std::to_string(imagx) + "i";
        negans = std::to_string(realx) + "-" + std::to_string(imagx) + "i";

        ans = posans + ", " + negans + '\n';

        return ans;
	}

    return ans;
}


int main() {

    int a{}, b{}, c{};

    std::cout << "This function will solve ax^2 + bx + c = 0." << '\n';
	std::cout << "Input your value for a: ";
	std::cin >> a;
	std::cout << "Input your value for b: ";
	std::cin >> b;
	std::cout << "Input your value for c: ";
	std::cin >> c;

    std::cout << quadratic_solver(a, b, c);

    return 0;
}