#include <iostream>

class Rectangle {
    int width, height;

    public:
    void set_value(int, int);
    int area() {return width*height;}

};

void Rectangle::set_value(int x, int y) {
    width = x;
    height = y;
}

// class internal function can be defined out of class
int main() {
    Rectangle rect;
    rect.set_value(3,4);
    std::cout << "area: " << rect.area() << std::endl;

    return 0;

}