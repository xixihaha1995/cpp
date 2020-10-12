#include <iostream>
#include <map>
#include <set>

int main() {
    // std::map<int,int> map {{1,2},{6,99}};
    // auto it = map.begin();
    // auto map_elem = *it;

    // std::cout << (*it).first <<std::endl;
    // std::cout << map_elem.second << std::endl;
    // int key, value;
    // std::set<int> set {3, 1, 4, 1, 5, 9};
    // for (auto itSet = set.begin(); itSet != set.end(); ++itSet) {
    //     const auto& elem = itSet;
    //     std::cout << *elem << std::endl;
    // }

    std::map<int, int> map {{1, 8}, {0, 3}, {3, 9}, {1, 6}, {1, 8}, {0, 3}, {3, 9}};
    for (const auto& [key, value]:map) {
        std::cout << key << ":" << value << std::endl;
    }


    return 0;
}