#include <iostream>
#include <string>
template <typename T, typename U>
auto my_min(const T& a, const U& b) {
    return a < b ? a : b;
}

int main () {
    std::string c = "nihao";
    std::string d = "buhao";
    
    // std::string retur = my_min<std::string>(c, d);
    // auto retur = my_min("neo", "leo");

    // int number = my_min(2.7,-6.2);
    // std::cout << retur[0] << std::endl;
    std::cout << my_min(2.7,-6.2) << std::endl;

    return 0;
}