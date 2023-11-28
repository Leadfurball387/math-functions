#pragma once
#include <iostream>
#include <cmath>
#include <vector>
#include <string>


// Solves 'ax^2 + bx + c = 0' for x
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

// Solves 'alog base b of x + c = 0' for x
void log_func(int a, int b, int c) {

	float x{};

	if (b > 0 && c > 0) {

		float exp = -c / a;
		x = pow(b, exp);
		std::cout << "Your answer is: " << x << '\n';
	}
	else {
		std::cout << "Out of domain or undefined.";
	}

}

// Fizzbuzz up to n
void fizzbuzz(int n) {

	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "fizzbuzz\n";
		}
		else if (i % 3 == 0) {
			std::cout << "fizz\n";
		}
		else if (i % 5 == 0) {
			std::cout << "buzz\n";
		}
		else {
			std::cout << i << '\n';
		}
	}

}

// Count to n
void count(int n) {

	for (int i = 1; i <= n; i++) {
		std::cout << i << '\n';
	}

}

// Count to n, count by k
void count_by(int n, int k) {

	for (int i = 0; i <= n; i++) {
		if (i % k == 0) {
			std::cout << i << '\n';
		}
	}

}

// Finds the lowest integer divisor for a number n or declares n as prime
void lowest_divisor(long long n) {

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			std::cout << n << " is divisible by " << i << ", which equals " << n / i << '.';
			return;
		}
	}

	std::cout << n << " is prime.";

}

// Checks if an integer n is prime
bool is_prime(long long n) {

	if (n == 1) {
		return false;
	}

	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
			break;
		}
	}

	return true;
}

// DOES NOT WORK
// Finds the prime factors of an integer n
void prime_fact(long long n) {

	std::vector<int> factors{};
	int pair;

	for (int i = 2; i <= sqrt(n) + 1; i++) {
		if (is_prime(i)) {
			if (n % i == 0) {
				pair = n / i;
				factors.push_back(i);
				if (is_prime(pair)) {
					factors.push_back(pair);
				}
			}
		}
	}

	for (int i : factors) {
		std::cout << i << '\n';
	}

}

// Finds the sum of all Fibonacci numbers such that the prime is less than n
int even_fib(long long n) {

	int a{ 1 };
	int b{ 0 };
	int sum{};
	int result{};

	do {
		sum = b + a;
		b = a;
		a = sum;

		if (a % 2 == 0) result += a;
	} while (result <= n);

	return result;

}

// Checks if an integer n is a palindrome number
bool is_palindrome(int n) {

	int num{ n };
	int rev{ 0 };
	int digit{};

	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);

	if (n == rev) {
		return true;
	}

	return false;
}

// Finds the largest palindrome that is the product of two three-digit numbers
int largest_palindrome() {

	int greatest_palindrome{ 0 };

	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			if (is_palindrome(i * j)) {
				if (i * j > greatest_palindrome) {
					greatest_palindrome = i * j;
				}
			}
		}
	}

	return greatest_palindrome;
}

// VERY SLOW PAST x=20
// Finds the smallest number that is divisible by the first x integers
long long smallest_multiple(int x) {

	int d{ x };
	long long n{ 1 };

	do {

		if (n % d == 0) {
			d = d - 1;
		}
		else {
			d = x;
			n++;
		}

	} while (d > 0);

	return n;

}

// Returns the difference of the 'square of the first n numbers' and the 'sum of the first n squares'
int sum_square_difference(int n) {

	int sum{ 0 };
	int sqr_of_sum{};

	int sum_of_sqrs{ 0 };

	int diff{};


	for (int i = 1; i <= n; i++) {

		sum = sum + i;
		sum_of_sqrs = sum_of_sqrs + (i * i);

	}

	sqr_of_sum = sum * sum;

	diff = sqr_of_sum - sum_of_sqrs;

	return diff;
}

// Returns the nth prime number
int nth_prime(int n) {

	int ans{};


	for (int inc = 1, prime_number = 1; inc <= n; prime_number++) {
		if (is_prime(prime_number)) {
			ans = prime_number;
			inc++;
		}
	}

	return ans;
}

// Checks if 'a^2 + b^2 = c^2' is true for integers a, b, and c
bool is_pythagorean_triple(int a, int b, int c) {

	if (a * a + b * b == c * c) {
		return true;
	}

	return false;
}

// Finds all Pythagorean triples within n range
void find_pythagorean_triples(int n) {

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			for (int k = 1; k < n; k++) {
				if (is_pythagorean_triple(i, j, k)) {
					std::cout << i << ", " << k << ", " << j;
				}
			}
		}
	}

}

// Finds a Pythagorean triple such that 'a + b + c = n' and returns the value of 'abc'
int special_pythagorean_triple(int n) {

	int product{};

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			for (int k = 1; k < n; k++) {
				if (is_pythagorean_triple(i, j, k) && (i + j + k == n)) {
					product = i * j * k;
					break;
				}
			}
		}
	}

	return product;
}

// Returns the sum of the first n prime numbers
long long summation_of_primes(int n) {
	long long sum{ 0 };
	int num{ 1 };

	do {
		if (is_prime(num)) {
			sum = sum + num;
		}
		num++;
	} while (num < n);

	return sum;
}

// Returns nth triangular number
int nth_triangular_num(int n) {
	long long nth_tri{ 0 };

	for (int i = 1; i <= n; i++) {
		nth_tri = nth_tri + i;
	}

	return nth_tri;
}

// Returns a vector containing the Collatz sequence starting with n
std::vector<long long> nth_collatz_sequence(long long n) {

	std::vector<long long> sequence;

	while (n > 1) {

		sequence.push_back(n);
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n = 3 * n + 1;
		}
	}

	sequence.push_back(1); // Add 1 at the end
	return sequence;
}

// Returns the starting number that results in the largest Collatz chain
int longest_collatz_sequence() {

	long long n{};
	int longest_size{ 0 };
	int greatest_start{};

	for (int i = 2; i < 1000000; i++) {
		n = i;
		std::vector<long long> sequence = nth_collatz_sequence(n);
		size_t current_size = sequence.size();

		if (current_size > longest_size) {
			longest_size = current_size;
			greatest_start = i;
			std::cout << longest_size << '\n';
		}
	}

	return greatest_start;
}


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