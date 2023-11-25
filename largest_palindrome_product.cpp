#include <iostream>


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


int main() {

    
    largest_palindrome();

	return 0;
}