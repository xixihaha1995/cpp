#include <iostream>
#include <vector>

int& front(std::vector<int>& vec) {
    return vec[0];
}

int main() {
    std::vector<int> numbers{1,6,6};
    front(numbers) = 6;

    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << ' ' << *it;
    }
    std::cout << "\n";
    return 0;
}