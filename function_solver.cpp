#include <iostream>
#include <string>
#include <vector>

void function_solver() {

    int userfunc{};
    std::string ans1{}, ans2{}, ans3{};
    int a{}, b{}, h{}, k{};
    int x1{}, x2{}, x3{};
    int y1{}, y2{}, y3{};


    std::cout << "This program will solve for three ordered pairs\n";
    std::cout << "Which function would you like to solve?\n";
    std::cout << "1. Linear (y = x)\n";

    std::cin >> userfunc;

    switch(userfunc) {
        case 1:

            std::cout << "Input your first x-value: ";
            std::cin >> x1;
            std::cout << "Input your second x-value: ";
            std::cin >> x2;
            std::cout << "Input your third x-value: ";
            std::cin >> x3;

            y1 = x1;
            y2 = x2;
            y3 = x3;

            // CANNOT CONCATENATE STRING ???
            ans1 = "(" + x1 + ", " + y1 + ")";
            ans2 = "(" + x2 + ", " + y2 + ")";
            ans3 = "(" + x3 + ", " + y3 + ")";

            std::cout << "Your ordered pairs are: \n";
            std::cout << ans1 + ", " + ans2 + ", " + ans3 + '\n';

    }

}


int main() {

    function_solver();

    return 0;
}