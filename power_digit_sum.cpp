#include "math_funcs.h"



void power_digit_sum() {

	int exponent{ 1000 };
	long long start{ 2 };
	long long power{ 1 };
	unsigned int current{ 0 };

	std::string strpower{};
	size_t len_strpower{};

	strpower = std::to_string(pow(2, 1000));

	//std::cout << power << '\n';

	len_strpower = strpower.size();

	std::cout << strpower << '\n';

	// Why '-1'?
	for (int i = 0; i <= len_strpower - 1; i++) {

		// Skips over '.' cuz it messes up ASCII conversion
		if (strpower[i] == '.') {
			continue;
		}
		else {
			std::cout << current << '\n';

			// Converts from ASCII to int
			current += strpower[i] - '0';
		}
		
	}
	
	std::cout << current;

}



int main() {

	power_digit_sum();

	return 0;
}