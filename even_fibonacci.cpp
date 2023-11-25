#include <iostream>
#include <vector>
#include <numeric>

void even_fib() {

	int a{ 1 };
	int b{ 0 };
	int sum{};
	int result{};

	do {
		sum = b + a;
		b = a;
		a = sum;
		//std::cout << a << ' ';

		if (a % 2 == 0) result += a;
	} while (result <= 4000000);

	//int result = std::accumulate(evens.begin(), evens.end(), decltype(evens)::value_type(0));
	std::cout << result;

}


int main() {

	even_fib();

	return 0;
}