#include <iostream>
#include <sstream>

int main() {
    std::string input = "6 six liu 6";
    std::istringstream i(input);

    int x; 
    // std::string y, z; int w;

    i >> x ;
    std::cout << x <<std::endl;

    return 0;
}