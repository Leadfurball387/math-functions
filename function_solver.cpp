#include <iostream>
#include <string>
#include <vector>
#include <cmath>


void print_long_answers(int x1, int x2, int x3, long long y1, long long y2, long long y3) {
    std::string ans1{}, ans2{}, ans3{};
    ans1 = "(" + std::to_string(x1) + ", " + std::to_string(y1) + ")";
    ans2 = "(" + std::to_string(x2) + ", " + std::to_string(y2) + ")";
    ans3 = "(" + std::to_string(x3) + ", " + std::to_string(y3) + ")";

    std::cout << "Your ordered pairs are: \n";
    std::cout << ans1 + ", " + ans2 + ", " + ans3 + '\n';
}

void print_float_answers(int x1, int x2, int x3, float y1, float y2, float y3) {
    std::string ans1{}, ans2{}, ans3{};
    ans1 = "(" + std::to_string(x1) + ", " + std::to_string(y1) + ")";
    ans2 = "(" + std::to_string(x2) + ", " + std::to_string(y2) + ")";
    ans3 = "(" + std::to_string(x3) + ", " + std::to_string(y3) + ")";

    std::cout << "Your ordered pairs are: \n";
    std::cout << ans1 + ", " + ans2 + ", " + ans3 + '\n';
}


void function_solver() {

    int userfunc{};
    int a{}, b{}, h{}, k{};
    char A{}, H{}, K{};
    int x1{}, x2{}, x3{};
    long long y1{}, y2{}, y3{};
    char goAgain{};

    std::cout << "This program will solve for three ordered pairs\n";

    do {
        a = 1, h = 0, k = 0;

        std::cout << "\n\nWhich function would you like to solve?\n";
        std::cout << "1. Linear (y = x)\n";
        std::cout << "2. Absolute Value (y = a|x - h| + k)\n";
        std::cout << "3. Quadratic (y = a(x - h)^2 + k)\n";
        std::cout << "4. Cubic (y = a(x - h)^3 + k)\n";
        std::cout << "5. Logarithmic (y = a log base b of (x - h) + k)\n";
        std::cout << "6. Rational (y = a / (x - h) + k)\n";

        std::cin >> userfunc;

       switch(userfunc) {
            case 1:
                // Linear
                std::cout << "Does your function have an a-value? (y/n): ";
                std::cin >> A;
                if (A == 'y') {
                    std::cout << "Input your a-value: ";
                    std::cin >> a;
                }

                std::cout << "Does your function have an h-value? (y/n): ";
                std::cin >> H;
                if (H == 'y') {
                    std::cout << "Input your h-value: ";
                    std::cin >> h;
                }

                std::cout << "Does your function have a k-value? (y/n): ";
                std::cin >> K;
                if (K == 'y') {
                    std::cout << "Input your k-value: ";
                    std::cin >> k;
                }

                std::cout << "This will solve y = " + std::to_string(a) + "(x - (" + std::to_string(h) + ")) + (" + std::to_string(k) + ")\n";
                
                std::cout << "Input your first x-value: ";
                std::cin >> x1;
                std::cout << "Input your second x-value: ";
                std::cin >> x2;
                std::cout << "Input your third x-value: ";
                std::cin >> x3;

                y1 = a * (x1 - h) + k;
                y2 = a * (x2 - h) + k;
                y3 = a * (x3 - h) + k;

                print_long_answers(x1, x2, x3, y1, y2, y3);

                break;

            case 2:
                // Absolute Value
                std::cout << "Does your function have an a-value? (y/n): ";
                std::cin >> A;
                if (A == 'y') {
                    std::cout << "Input your a-value: ";
                    std::cin >> a;
                }

                std::cout << "Does your function have an h-value? (y/n): ";
                std::cin >> H;
                if (H == 'y') {
                    std::cout << "Input your h-value: ";
                    std::cin >> h;
                }

                std::cout << "Does your function have a k-value? (y/n): ";
                std::cin >> K;
                if (K == 'y') {
                    std::cout << "Input your k-value: ";
                    std::cin >> k;
                }

                std::cout << "This will solve y = " + std::to_string(a) + "|x - (" + std::to_string(h) + ")| + (" + std::to_string(k) + ")\n";

                std::cout << "Input your first x-value: ";
                std::cin >> x1;
                std::cout << "Input your second x-value: ";
                std::cin >> x2;
                std::cout << "Input your third x-value: ";
                std::cin >> x3;


                if (x1-h < 0) {
                    y1 = -1 * (x1 - h) * a + k;
                } else {
                    y1 = a * (x1 - h) + k;
                }
                if (x2-h < 0) {
                    y2 = -1 * (x2 - h) * a + k;
                } else {
                    y2 = a * (x2 - h) + k;
                }
                if (x3-h < 0) {
                    y3 = -1 * (x3 - h) * a + k;
                } else {
                    y3 = a * (x3 - h) + k;
                }

                print_long_answers(x1, x2, x3, y1, y2, y3);

                break;

            case 3:
                // Quadratic
                std::cout << "Does your function have an a-value? (y/n): ";
                std::cin >> A;
                if (A == 'y') {
                    std::cout << "Input your a-value: ";
                    std::cin >> a;
                }

                std::cout << "Does your function have an h-value? (y/n): ";
                std::cin >> H;
                if (H == 'y') {
                    std::cout << "Input your h-value: ";
                    std::cin >> h;
                }

                std::cout << "Does your function have a k-value? (y/n): ";
                std::cin >> K;
                if (K == 'y') {
                    std::cout << "Input your k-value: ";
                    std::cin >> k;
                }

                std::cout << "This will solve y = " + std::to_string(a) + "(x - (" + std::to_string(h) + "))^2 + (" + std::to_string(k) + ")\n";

                std::cout << "Input your first x-value: ";
                std::cin >> x1;
                std::cout << "Input your second x-value: ";
                std::cin >> x2;
                std::cout << "Input your third x-value: ";
                std::cin >> x3;


                y1 = a * (x1 - h) * (x1 - h) + k;
                y2 = a * (x2 - h) * (x2 - h) + k;
                y3 = a * (x3 - h) * (x3 - h) + k;

                print_long_answers(x1, x2, x3, y1, y2, y3);

                break;

            case 4:
                // Cubic
                std::cout << "Does your function have an a-value? (y/n): ";
                std::cin >> A;
                if (A == 'y') {
                    std::cout << "Input your a-value: ";
                    std::cin >> a;
                }

                std::cout << "Does your function have an h-value? (y/n): ";
                std::cin >> H;
                if (H == 'y') {
                    std::cout << "Input your h-value: ";
                    std::cin >> h;
                }

                std::cout << "Does your function have a k-value? (y/n): ";
                std::cin >> K;
                if (K == 'y') {
                    std::cout << "Input your k-value: ";
                    std::cin >> k;
                }

                std::cout << "This will solve y = " + std::to_string(a) + "(x - (" + std::to_string(h) + "))^3 + (" + std::to_string(k) + ")\n";

                std::cout << "Input your first x-value: ";
                std::cin >> x1;
                std::cout << "Input your second x-value: ";
                std::cin >> x2;
                std::cout << "Input your third x-value: ";
                std::cin >> x3;


                y1 = a * (x1 - h) * (x1 - h) * (x1 - h) + k;
                y2 = a * (x2 - h) * (x2 - h) * (x2 - h) + k;
                y3 = a * (x3 - h) * (x3 - h) * (x3 - h) + k;

                print_long_answers(x1, x2, x3, y1, y2, y3);

                break;

            case 5:
                // Logarithmic
                do {
                    std::cout << "Input your function's b-value: ";
                    std::cin >> b;
                    if (b <= 1){
                        std::cout << "Domain error; b-value must be greater than 1.\n";
                    }
                } while (b <= 1);

                std::cout << "Does your function have an a-value? (y/n): ";
                std::cin >> A;
                if (A == 'y') {
                    std::cout << "Input your a-value: ";
                    std::cin >> a;
                }

                std::cout << "Does your function have an h-value? (y/n): ";
                std::cin >> H;
                if (H == 'y') {
                    std::cout << "Input your h-value: ";
                    std::cin >> h;
                }

                std::cout << "Does your function have a k-value? (y/n): ";
                std::cin >> K;
                if (K == 'y') {
                    std::cout << "Input your k-value: ";
                    std::cin >> k;
                }

                std::cout << "This will solve y = " + std::to_string(a) + "log base " + std::to_string(b) + " of (x - (" + std::to_string(h) + ")) + (" + std::to_string(k) + ")\n";

                std::cout << "Input your first x-value: ";
                std::cin >> x1;
                std::cout << "Input your second x-value: ";
                std::cin >> x2;
                std::cout << "Input your third x-value: ";
                std::cin >> x3;

                y1 = a * logb(x1 - h) + k;
                y2 = a * logb(x2 - h) + k;
                y3 = a * logb(x3 - h) + k;

                print_float_answers(x1, x2, x3, y1, y2, y3);

                break;

            case 6:
                // Rational
                float y1{}, y2{}, y3{};

                std::cout << "Does your function have an a-value? (y/n): ";
                std::cin >> A;
                if (A == 'y') {
                    std::cout << "Input your a-value: ";
                    std::cin >> a;
                }

                std::cout << "Does your function have an h-value? (y/n): ";
                std::cin >> H;
                if (H == 'y') {
                    std::cout << "Input your h-value: ";
                    std::cin >> h;
                }

                std::cout << "Does your function have a k-value? (y/n): ";
                std::cin >> K;
                if (K == 'y') {
                    std::cout << "Input your k-value: ";
                    std::cin >> k;
                }
                
                std::cout << "This will solve y = " + std::to_string(a) + " / (x - (" + std::to_string(h) + ")) + (" + std::to_string(k) + ")\n";

                do {
                    std::cout << "Input your first x-value: ";
                    std::cin >> x1;
                    if (x1 - h == 0){
                        std::cout << "Domain error; denominator cannot equal 0.\n";
                    }
                } while (x1 == 0);
                do {
                    std::cout << "Input your second x-value: ";
                    std::cin >> x2;
                    if (x2 - h == 0){
                        std::cout << "Domain error; denominator cannot equal 0.\n";
                    }
                } while (x2 == 0);
                do {
                    std::cout << "Input your third x-value: ";
                    std::cin >> x3;
                    if (x3 - h == 0){
                        std::cout << "Domain error; denominator cannot equal 0.\n";
                    }
                } while (x3 == 0);

                y1 = ((float)a / ((float)x1 - (float)h)) + (float)k;
                y2 = ((float)a / ((float)x2 - (float)h)) + (float)k;
                y3 = ((float)a / ((float)x3 - (float)h)) + (float)k;

                print_float_answers(x1, x2, x3, y1, y2, y3);

                break;
        }

        std::cout << "Would you like to go again? (y/n)\n";
        std::cin >> goAgain;

    } while (goAgain == 'y' || goAgain == 'Y');
}


int main() {

    function_solver();

    return 0;
}