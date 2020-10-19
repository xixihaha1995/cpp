#include <iostream>
#include <vector>

int main () {
    std::vector<int> v {66,72 };
    std::vector<int> vCopy;

    std::copy(v.begin(), v.end(), std::back_inserter(vCopy));
    for (auto elem:vCopy) {
        std::cout << elem << std::endl;
    }
    return 0;
}