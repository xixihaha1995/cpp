#include <iostream>
#include <type_traits>
int main () 
{
    int* x1, x2;
    std::cout<<"x1 is " << typeid(x2).name() << std::endl;
    return 0;
}