// DOESNT WORK FOR SOME NUMBERS????

#include <iostream>
#include <vector>


std::vector<int> sort(std::vector<int> nums) {

    int temp{};

    for (int i = 0; i < nums.size(); i++) {

        if (i == nums.size() - 1) {
            break;
        }
        else if (nums[i] > nums[i + 1]) {

            temp = nums[i + 1];
            nums[i + 1] = nums[i];
            nums[i] = temp;
            
            i = -1;
        }
        else {
            continue;
        }

    }

    return nums;
}

int main() {

    std::vector<int> nums{};
    int n{};
    int a{};

    std::cout << "How many numbers would you like to sort?\n";
    std::cin >> n;
    std::cout << "Please begin entering your " << n << " numbers:\n";

    for (int i = 0; i < n; i++) {
        std::cin >> a;
        nums.push_back(a);
    }

    std::cout << "\n\n\nYour sorted numbers are: \n";

    for (int i : sort(nums)) {
        std::cout << i << "  ";
    }

    return 0;
}