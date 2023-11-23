#include <iostream>

void count(int n) {

	for (int i = 1; i <= n; i++) {
		std::cout << i << '\n';
	}

}


int main() {

	int n{};

	std::cout << "Please input what number you would like to count to: ";
	std::cin >> n;

	count(n);

	return 0;
}