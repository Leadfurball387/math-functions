#include <iostream>

void count_by() {

	int n{};
	int k{};

	std::cout << "Input the number you would like to count to: ";
	std::cin >> n;
	std::cout << "Input the number you would like to count by: ";
	std::cin >> k;


	for (int i = 0; i <= n; i++) {
		if (i % k == 0) {
			std::cout << i << '\n';
		}
	}


}


int main() {
	
	count_by();

	return 0;
}