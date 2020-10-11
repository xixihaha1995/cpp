#include <iostream>
#include <vector>

int main() {
    std::vector<char> vec{'a', 'b', 'c'};
    vec[0] = 'A';
    std::cout << vec.back() << std::endl;

    for (size_t i = 0; i < vec.size(); i++) {
        vec[i]++;
    }


}