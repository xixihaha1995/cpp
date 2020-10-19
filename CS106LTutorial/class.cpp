#include <iostream>

class Rectangle {
    int width, height;

    public:
    Rectangle(int, int);
    void set_value(int, int);
    int area() {return width*height;}

};
Rectangle::Rectangle(int a, int b) {
    width = a;
    height = b;
}
void Rectangle::set_value(int x, int y) {
    width = x;
    height = y;
}
//scope operator two colons, ::
// class internal function can be defined out of class
int main() {
    Rectangle rect(2,7);
    rect.set_value(3,4);
    std::cout << "area: " << rect.area() << std::endl;

    return 0;

}