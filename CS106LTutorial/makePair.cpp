#include <utility> //std::pair
#include <iostream> //std::cout

int main()
{
    auto p = std::make_pair("s", 5);
    // auto a;
    // auto b;
    // auto [a, b] = p;

    std::cout << "p: " << p.first << "," << p.second << std::endl;
    return 0;
}