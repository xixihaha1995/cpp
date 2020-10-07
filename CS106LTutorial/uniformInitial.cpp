#include <iostream>

int main()
{
    int *pin = new int[5]{1,2,3,0,5};
    for (int i = 0; i < 5; i++) {
        std::cout << (pin + i) << std::endl;
        std::cout <<"Pointer Length:" << sizeof(*pin) << std::endl;
    }
    return 0;

}