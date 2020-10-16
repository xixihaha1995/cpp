#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

bool isVoewl(char c) {
    std::vector<char> vec {'a', 'e', 'i', 'o', 'u'};
    return (std::find(vec.begin(),vec.end(), c) != vec.end());
}

int main() {
    std::cout << isVoewl('d') << std::endl;
    return 0;
}