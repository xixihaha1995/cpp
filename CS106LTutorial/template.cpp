#include <iostream>
#include <string>
#include <vector>
template <typename T, typename U>
auto my_min(const T& a, const U& b) {
    return a < b ? a : b;
}

va// template <typename T, typename ...Ts>
// auto my2min(const T& num, Ts... args) {
//     auto min = my2min(args...);
//     // T elem = nums[0];
//     // if (nums.size() == 1) return elem;
//     // auto min = my2min(nums.subList(1));
//     if (num < min) min = num;
//     return min;
// }

// template <typename T>
// auto my2min(const T& num) {
//     return num;
// }

template <typename T>
T adder(T v) {
    return v;
}
template <typename T, typename... Args>
T adder(T first, Args... args) {
    return first + adder(args...);
}

int main () {
    std::string c = "nihao";
    std::string d = "buhao";
    
    // std::string retur = my_min<std::string>(c, d);
    // auto retur = my_min("neo", "leo");
    auto sumAdder = adder(4.2, -7.9, 8.223, 0.0, 1.753);
    // int number = my_min(2.7,-6.2);
    // std::cout << retur[0] << std::endl;
    std::cout << sumAdder << std::endl;

    return 0;
}