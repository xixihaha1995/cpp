#include <iostream>
#include <vector>

int main () {
    std::vector<int> v {66,72 };
    std::vector<int> vCopy(v.size());

    std::copy(v.begin(), v.end(), vCopy.begin());
    for (auto elem:vCopy) {
        std::cout << elem << std::endl;
    }
    return 0;
}