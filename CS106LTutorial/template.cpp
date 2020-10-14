#include <iostream>
#include <string>
template <typename T>
T my_min(const T& a, const T& b) {
    return a < b ? a : b;
}

int main () {
    std::string c = "nihao";
    std::string d = "buhao";
    
    // std::string retur = my_min<std::string>(c, d);
    std::string retur = my_min(c, d);

    int number = my_min(2,-6);
    std::cout << retur << std::endl;
    std::cout << number << std::endl;

    return 0;
}