#include <iostream>
#include <vector>

int main() {
    std::vector<char> vec{'a', 'b', 'c'};
    vec[0] = 'A';
    std::cout << vec.back() << std::endl;

    std::vector<char> vec2{'A', 'b', 'c'};

    if (vec == vec2) {
        std::cout << "why vec equals vec2? \n";
    }

    // for (size_t i = 0; i < vec.size(); i++) {
    //     vec[i]++;
    //     std::cout << vec[i] <<std::endl;
    // }
    // for (auto& elem : vec) {
    //     elem--;
    //     std::cout << elem <<std::endl;
    // }
    return 0;


}