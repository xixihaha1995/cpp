#include <set>
#include <iostream>

int main() {
    std::set<int> numSet;
    numSet += 66;
    numSet += 23;
    for (auto elem: numSet) {
        std::cout << elem << std::endl;
    }
    return 0;
}