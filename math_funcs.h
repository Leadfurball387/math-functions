#pragma once
#include <iostream>
#include <cmath>
#include <vector>


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

	if (is_prime(n)) {
		std::cout << "The number is prime.";
	}

}

// Finds the sum of all Fibonacci numbers such that the prime is less than n
void even_fib(long long n) {

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
	} while (result <= n);

	//int result = std::accumulate(evens.begin(), evens.end(), decltype(evens)::value_type(0));
	std::cout << result;

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
void largest_palindrome() {

	int greatest_palindrome{ 0 };

	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			if (is_palindrome(i * j)) {
				if (i * j > greatest_palindrome) {
					greatest_palindrome = i * j;
				}
				std::cout << greatest_palindrome << '\n';
			}
		}
	}

}

// VERY SLOW PAST x=20
// Finds the smallest number that is divisible by the first x integers
void smallest_multiple(int x) {

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

	std::cout << n;

}

// Finds the difference of the 'square of the first n numbers' and the 'sum of the first n squares'
void sum_square_difference(int n) {

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

	std::cout << diff;
}