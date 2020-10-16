#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool isVoewl(char c) {
    std::vector<char> vec {'a', 'e', 'i', 'o', 'u'};
    return (std::find(vec.begin(),vec.end(), c) != vec.end());
}

int main() {
    std::cout << isVoewl('o') << std::endl;
    auto is_less_than = [int limit](int val) {return (val < limit)};
    std::cout << is_less_than

    return 0;
}