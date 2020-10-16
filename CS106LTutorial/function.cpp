#include <iostream>
#include <algorithm>
#include <vector>

bool isVoewl(char c) {
    std::vector<char> vec {"aeiou"};
    return std::find(vec.begin(),vec.end(), c) != -1;
}

int main() {
    std::cout << isVoewl('d') << std::endl;
    return 0;
}