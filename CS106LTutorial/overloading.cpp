#include <set>
#include <iostream>

// bool operator==(const Point& lhs, const Point& rhs) {
//     return lhs.x == rhs.x && lhs.y == rhs.y;
// }
int global = 1;
int& getGlobal() {
    return global;//although return variable, it's indeed a reference
}
int main() {
    // Set& operator+=(const ValueType& value) {

    // }
    // std::set<int> numSet;
    // numSet += 66;
    // numSet += 23;
    // for (auto elem: numSet) {
    //     std::cout << elem << std::endl;
    // }
    getGlobal() += 2;
    std::cout << global << std::endl;
    return 0;
}