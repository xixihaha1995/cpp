#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec {1,6,9,12};
    std::vector<int>::const_iterator constItr = vec.begin();
    // *constItr = 72;
    ++constItr;
    std::cout << *constItr <<std::endl;
    return 0;

}