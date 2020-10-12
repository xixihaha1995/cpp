#include <iostream>
#include <map>

int main() {
    std::map<int,int> map {{1,2},{6,99}};
    auto it = map.begin();
    auto map_elem = *it;

    std::cout << (*it).first <<std::endl;
    std::cout << map_elem.second << std::endl;
    return 0;
}