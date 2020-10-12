#include <iostream>
#include <map>
#include <set>

int main() {
    std::map<int,int> map {{1,2},{6,99}};
    auto it = map.begin();
    auto map_elem = *it;

    std::cout << (*it).first <<std::endl;
    std::cout << map_elem.second << std::endl;
    
    std::set<int> set {3, 1, 4, 1, 5, 9};
    for (auto itSet = set.begin(); itSet != set.end(); ++itSet) {
        const auto& elem = itSet;
        std::cout << *elem << std::endl;
    }


    return 0;
}