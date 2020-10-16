#include <iostream>
bool isVoewl(char c) {
    return std::find("aeiou", c) != -1;
}

int main() {
    std::cout << isVoewl('d') << std::endl;
}